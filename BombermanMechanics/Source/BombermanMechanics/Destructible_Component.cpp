// Fill out your copyright notice in the Description page of Project Settings.


#include "Destructible_Component.h"

// Sets default values for this component's properties
UDestructible_Component::UDestructible_Component()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UDestructible_Component::BeginPlay()
{
	Super::BeginPlay();

	StartLocation = GetOwner()->GetActorLocation();
	// ...
	
}

void UDestructible_Component::DestroyViaBomb()
{
	GetOwner()->Destroy();
}


// Called every frame
void UDestructible_Component::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	CurrentTime += DeltaTime;

	const float TimeRatio = FMath::Clamp(CurrentTime / TimeToMove, 0.0f, 1.0f);
	FVector currentLocation = GetOwner()->GetActorLocation();
	FVector nextLocation = FMath::Lerp(StartLocation, StartLocation + EndLocationOffset, TimeRatio);
	GetOwner()->SetActorLocation(nextLocation);

	// ...
}

