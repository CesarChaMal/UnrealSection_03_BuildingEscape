// Copyright Cesar Chavez.

#include "BuildingEscape.h"
#include "PositionReport.h"


// Sets default values for this component's properties
UPositionReport::UPositionReport()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPositionReport::BeginPlay()
{
	Super::BeginPlay();

	AActor* unrealObject = GetOwner();
	FString unrealObjectName = unrealObject->GetName();
	FVector unrealObjectVector = unrealObject->GetTransform().GetLocation();
	//FVector unrealObjectPos = unrealObject->GetActorLocation();
	//FString unrealObjectPos = unrealObject->GetTransform().GetLocation().ToString();
	//FString unrealObjectPos = .ToString();
	float unrealObjectPosX = unrealObjectVector.X;
	float unrealObjectPosY = unrealObjectVector.Y;
	float unrealObjectPosZ = unrealObjectVector.Z;
	//FString unrealObjectPos = "X=" + unrealObjectPosX + "2";
	FString unrealObjectPos = FString::Printf(TEXT("X = %f, Y = %f, Z = %f"), unrealObjectPosX, unrealObjectPosY, unrealObjectPosY);
	//UE_LOG(LogTemp, Warning, TEXT("%s is at %s"), *unrealObjectName, *unrealObjectVector.ToString());
	UE_LOG(LogTemp, Warning, TEXT("%s is at %s"), *unrealObjectName, *unrealObjectPos);
}


// Called every frame
void UPositionReport::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

	// ...
}

