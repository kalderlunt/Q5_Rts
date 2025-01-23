// Fill out your copyright notice in the Description page of Project Settings.


#include "SelectionBox.h"

#include "Selectable.h"
#include "SPlayerController.h"
#include "Components/BoxComponent.h"
#include "Components/DecalComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"


// Sets default values
ASelectionBox::ASelectionBox()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollider"));
	BoxCollider->SetBoxExtent(FVector(1.f, 1.f, 1.f));
	BoxCollider->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	BoxCollider->SetCollisionResponseToAllChannels(ECR_Overlap);
	BoxCollider->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	RootComponent = BoxCollider;

	BoxCollider->OnComponentBeginOverlap.AddDynamic(this, &ASelectionBox::OnBoxColliderBeginOverlap);
	
	DecalComponent = CreateDefaultSubobject<UDecalComponent>(TEXT("DecalComponent"));
	DecalComponent->SetupAttachment(RootComponent);
	
	BoxSelect = false;
}

// Called when the game starts or when spawned
void ASelectionBox::BeginPlay()
{
	Super::BeginPlay();

	SetActorEnableCollision(false);
	if (DecalComponent)
	{
		DecalComponent->SetVisibility(false);
	}

	// Assign player controller reference
	SPlayer = Cast<ASPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
}

// Called every frame
void ASelectionBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (BoxSelect)
	{
		Adjust();
		Manage();
	}
}

void ASelectionBox::Start(FVector Position, const FRotator Rotation)
{
	if (!DecalComponent)
	{
		return;
	}

	StartLocation = FVector(Position.X, Position.Y, 0.f);
	StartRotation = FRotator(0.f, Rotation.Yaw, 0.f);

	SetActorLocation(StartLocation);
	SetActorRotation(StartRotation);
	SetActorEnableCollision(true);

	DecalComponent->SetVisibility(true);
	InBox.Empty();
	CenterInBox.Empty();
	BoxSelect = true;
}

void ASelectionBox::End()
{
	if (!SPlayer)
	{
		return;
	}

	BoxSelect = false;
	SetActorEnableCollision(false);
	DecalComponent->SetVisibility(false);

	// Select the filtered list of actors who's centers are bound by the collider
	if (CenterInBox.Num() == 0)
	{
		// Handle selecting nothing
		SPlayer->Handle_Selection(nullptr);
	}
	else
	{
		SPlayer->Handle_Selection(CenterInBox);
	}

	InBox.Empty();
	CenterInBox.Empty();
}

void ASelectionBox::Adjust() const
{
	if (!SPlayer || !BoxCollider || !DecalComponent)
	{
		return;
	}

	const FVector CurrenMouseLocOnTerrain = SPlayer->GetMousePositionOnTerrain();
	const FVector EndPoint = FVector(CurrenMouseLocOnTerrain.X, CurrenMouseLocOnTerrain.Y, 0.f);
	BoxCollider->SetWorldLocation(UKismetMathLibrary::VLerp(StartLocation, EndPoint, 0.5f));

	FVector NewExtent = FVector(GetActorLocation().X, GetActorLocation().Y, 0.f) - EndPoint;
	NewExtent = GetActorRotation().GetInverse().RotateVector(NewExtent);
	NewExtent = NewExtent.GetAbs();
	NewExtent.Z += 100000.f;
	BoxCollider->SetBoxExtent(NewExtent);

	FVector DecalSize;
	DecalSize.X = NewExtent.Z;
	DecalSize.Y = NewExtent.Y;
	DecalSize.Z = NewExtent.X;
	DecalComponent->DecalSize = DecalSize;
}

void ASelectionBox::Manage()
{
	if (!BoxCollider)
	{
		return;
	}

	for (int i = 0; i < InBox.Num(); ++i)
	{
		// Get actor center and transform into the local space of the collider
		FVector ActorCenter = InBox[i]->GetActorLocation();
		const FVector LocalActorCenter = BoxCollider->GetComponentTransform().InverseTransformPosition(ActorCenter);

		// Get the local extents of the collider
		const FVector LocalExtents = BoxCollider->GetUnscaledBoxExtent();
		if (LocalActorCenter.X >= - LocalExtents.X && LocalActorCenter.X <= LocalExtents.X
			&& LocalActorCenter.Y >= - LocalExtents.Y && LocalActorCenter.Y <= LocalExtents.Y
			&& LocalActorCenter.Z >= - LocalExtents.Z && LocalActorCenter.Z <= LocalExtents.Z)
		{
			// Add unit to center is in selection box list
			if (CenterInBox.Contains(InBox[i]))
			{
				CenterInBox.Add(InBox[i]);
				HandleHighlight(InBox[i], true);
			}
		}
		else
		{
			CenterInBox.Remove(InBox[i]);
			HandleHighlight(InBox[i], false);
		}
	}
}

void ASelectionBox::HandleHighlight(AActor* ActorInBox, const bool Highlight) const
{
	if (ISelectable* Selectable = Cast<ISelectable>(ActorInBox))
	{
		Selectable->Highlight(Highlight);
	}
}

void ASelectionBox::OnBoxColliderBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!OtherActor || OtherActor == this)
	{
		return;
	}

	// Check is a selectable unit
	if (ISelectable* Selectable = Cast<ISelectable>(OtherActor))
	{
		InBox.AddUnique(OtherActor);
	}
}

