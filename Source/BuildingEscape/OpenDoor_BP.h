// Copyright Cesar Chavez.

#pragma once

#include "Components/ActorComponent.h"
#include "OpenDoor_BP.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDoorEvent);

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class BUILDINGESCAPE_API UOpenDoor_BP : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UOpenDoor_BP();

	// Called when the game starts
	virtual void BeginPlay() override;

	void openDoor();
	void closeDoor();

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(BlueprintAssignable)
	FDoorEvent onOpen;

	UPROPERTY(BlueprintAssignable)
	FDoorEvent onClose;

private:
	//UPROPERTY(VisibleAnywhere)

	UPROPERTY(EditAnywhere)
	ATriggerVolume* pressurePlate;

	//AActor* actorThatOpens;
	AActor* owner;

	// Return total mass in kg
	float getTotalMassOfActorsOnPlate();

	UPROPERTY(EditAnywhere)
	float triggerMass = 30.f;

};

