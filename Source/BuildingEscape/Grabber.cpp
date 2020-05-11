// Copyright Cesar Chavez.

#include "BuildingEscape.h"
#include "Grabber.h"
#define OUT

// Sets default values for this component's properties
UGrabber::UGrabber()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = true;
}

// Called when the game starts
void UGrabber::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Grabber reporting for duty!"));
	findPhysicsHandleComponent();
	setupInputComponent();
}

void UGrabber::findPhysicsHandleComponent()
{
	/// Look for attached  physics handle
	physicsHandle = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();
	if (physicsHandle == nullptr) {
		UE_LOG(LogTemp, Error, TEXT("%s missing physics handle component"), *GetOwner()->GetName());
	}
}

void UGrabber::setupInputComponent()
{
	/// Look for attached  input component (only appears at run time (play mode))
	inputComponent  = GetOwner()->FindComponentByClass<UInputComponent>();
	if (inputComponent) {
		UE_LOG(LogTemp, Warning, TEXT("Input component found"));
		/// Bind the input axis
		inputComponent->BindAction("Grab", IE_Pressed, this, &UGrabber::grab);
		inputComponent->BindAction("Grab", IE_Released, this, &UGrabber::release);
	} else {
		UE_LOG(LogTemp, Error, TEXT("%s missing input component"), *GetOwner()->GetName());
	}
}

const FHitResult UGrabber::getFirstPhysicsBodyInReach()
{
	/// Line-trace (AKA Ray-cast) out to reach distance
	FHitResult hitResult;
	FCollisionQueryParams traceParameters(FName(TEXT("")), false, GetOwner());
	GetWorld()->LineTraceSingleByObjectType(
		OUT hitResult,
		getReachLineStart(),
		getReachLineEnd(),
		FCollisionObjectQueryParams(ECollisionChannel::ECC_PhysicsBody),
		traceParameters
	);

	/// See what we hit
	AActor* actorHit = hitResult.GetActor();
	if (actorHit) {
		UE_LOG(LogTemp, Warning, TEXT("Line trace hit: %s"), *(actorHit->GetName()));
	}

	return hitResult;
}

void UGrabber::grab()
{
	UE_LOG(LogTemp, Warning, TEXT("Grab pressed"));

	/// Try and reach any actors with physics body collision channel set

	/// LINE TRACE and see if we any actors with physics body collision channel set
	auto hitResult = getFirstPhysicsBodyInReach();
	auto componentToGrab = hitResult.GetComponent();
	auto actorHit = hitResult.GetActor();

	/// if we hit something then attach a physics handle
	if (actorHit) {
		if (!physicsHandle)
			return;
		physicsHandle->GrabComponent(
			componentToGrab, 
			NAME_None, // no bones needed
			componentToGrab->GetOwner()->GetActorLocation(), 
			true // allow rotation
		);
	}
}

void UGrabber::release()
{
	if (!physicsHandle)
		return;

	UE_LOG(LogTemp, Warning, TEXT("Grab released"));
	physicsHandle->ReleaseComponent();
}

// Called every frame
void UGrabber::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

	if (!physicsHandle)
		return;

	/// if the physics handle is attached
	if (physicsHandle->GrabbedComponent) {
		/// move the object that we're holding
		physicsHandle->SetTargetLocation(getReachLineEnd());
	}
}

FVector UGrabber::getReachLineStart()
{
	/// Get player view point this tick
	FVector playerViewPointLocation;
	FRotator playerViewPointRotation;
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(OUT playerViewPointLocation, OUT playerViewPointRotation);
	///UE_LOG(LogTemp, Warning, TEXT("Location: %s, Rotation: %s"), *playerViewPointLocation.ToString(), *playerViewPointRotatation.ToString())

	/// Draw a red trace in the world to visualise
	///FVector lineTraceEnd = playerViewPointLocation + FVector(0.f, 0.f, 50.f);
	return  playerViewPointLocation;
}

FVector UGrabber::getReachLineEnd()
{
	/// Get player view point this tick
	FVector playerViewPointLocation;
	FRotator playerViewPointRotation;
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(OUT playerViewPointLocation, OUT playerViewPointRotation);
	///UE_LOG(LogTemp, Warning, TEXT("Location: %s, Rotation: %s"), *playerViewPointLocation.ToString(), *playerViewPointRotatation.ToString())

	/// Draw a red trace in the world to visualise
	///FVector lineTraceEnd = playerViewPointLocation + FVector(0.f, 0.f, 50.f);
	return  playerViewPointLocation + (playerViewPointRotation.Vector() * reach);
}
