// Copyright Cesar Chavez.

#pragma once

#include "Components/ActorComponent.h"
#include "Grabber.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDINGESCAPE_API UGrabber : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGrabber();

	// Called when the game starts
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction ) override;

private:
	// How far ahead of the player can we reach in cm	
	float reach = 100.f;
	
	UPhysicsHandleComponent* physicsHandle = nullptr;
	
	UInputComponent* inputComponent = nullptr;

	// Ray-cast and what's in reach
	void grab();

	// Called when grab is released
	void release();

	// Find (assume) attached physics handle
	void findPhysicsHandleComponent();

	// Setup (assume) attached input component
	void setupInputComponent();

	// Return hit for first physics body in reach
	const FHitResult getFirstPhysicsBodyInReach();

	// Returns current start of reach line
	FVector getReachLineStart();

	// Returns current end of reach line
	FVector getReachLineEnd();
};
