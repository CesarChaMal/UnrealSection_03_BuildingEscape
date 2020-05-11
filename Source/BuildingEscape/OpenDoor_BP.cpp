// Copyright Cesar Chavez.

#include "BuildingEscape.h"
#include "OpenDoor_BP.h"
#define OUT

// Sets default values for this component's properties
UOpenDoor_BP::UOpenDoor_BP()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UOpenDoor_BP::BeginPlay()
{
	Super::BeginPlay();
	///actorThatOpens = GetWorld()->GetFirstPlayerController()->GetPawn();
	owner = GetOwner();
	
	if (pressurePlate == nullptr)
		UE_LOG(LogTemp, Error, TEXT("%s missing pressure plate"), *owner->GetName());
}

void UOpenDoor_BP::openDoor()
{
	///FString yaw = FString::Printf(TEXT("Yaw = %f"), owner->GetActorRotation().Yaw);
	///UE_LOG(LogTemp, Warning, TEXT("%s"), *yaw);
	onOpen.Broadcast();
}

void UOpenDoor_BP::closeDoor()
{
	///FString yaw = FString::Printf(TEXT("Yaw = %f"), owner->GetActorRotation().Yaw);
	///UE_LOG(LogTemp, Warning, TEXT("%s"), *yaw);
	onClose.Broadcast();
}


// Called every frame
void UOpenDoor_BP::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );
	
	/// Poll the  trigger volume
	/// if the actorThatOpens is in the volume
	/// if (pressurePlate->IsOverlappingActor(actorThatOpens)) {
	if (getTotalMassOfActorsOnPlate() > triggerMass) {
		openDoor();
	} else {
		closeDoor();
	}
}

float UOpenDoor_BP::getTotalMassOfActorsOnPlate()
{
	float totalMass = 0.f;

	TArray<AActor*> overlappingActors;

	if (pressurePlate == nullptr) {
		UE_LOG(LogTemp, Error, TEXT("%s missing pressure plate"), *owner->GetName());
		return totalMass;
	}

	/// Find all the overlapping actors
	pressurePlate->GetOverlappingActors(OUT overlappingActors);

	/// iterate through them adding their masses
	for (auto& actor : overlappingActors)
	{
		totalMass += actor->FindComponentByClass<UPrimitiveComponent>()->GetMass();
		UE_LOG(LogTemp, Warning, TEXT("%s on pressure plate"), *actor->GetName());
	}

	return totalMass;
}

