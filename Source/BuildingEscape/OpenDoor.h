// Copyright Cesar Chavez.

#pragma once

#include "Components/ActorComponent.h"
#include "OpenDoor.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDINGESCAPE_API UOpenDoor : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UOpenDoor();

	// Called when the game starts
	virtual void BeginPlay() override;

	void openDoor();
	void closeDoor();

	// Called every frame
	virtual void TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction ) override;

private:
	//UPROPERTY(VisibleAnywhere)
	UPROPERTY(EditAnywhere)
	float openAngle = -200.0f;

	UPROPERTY(EditAnywhere)
	ATriggerVolume* pressurePlate;

	UPROPERTY(EditAnywhere)
	float doorCloseDelay = 1.f;
	
	float lastDoorOpenTime;

	//AActor* actorThatOpens;
	AActor* owner;

	// Return total mass in kg
	float getTotalMassOfActorsOnPlate();

	UPROPERTY(EditAnywhere)
	float triggerMass = 30.f;
};
