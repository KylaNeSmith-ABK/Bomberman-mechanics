// Fill out your copyright notice in the Description page of Project Settings.


#include "Destructible_Component.h"

// Sets default values for this component's properties
UDestructible_Component::UDestructible_Component()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	Owner_ = GetOwner();
	// ...
}


// Called when the game starts
void UDestructible_Component::BeginPlay()
{
	Super::BeginPlay();

	if (Owner_)
	{
		StartLocation_ = Owner_->GetActorLocation();
	}
	
	// ...
	
}

void UDestructible_Component::DestroyViaBomb()
{
	if (Owner_)
	{
		Owner_->Destroy();
	}
	
}


// Called every frame
void UDestructible_Component::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	CurrentTime_ += DeltaTime;

	if (Owner_)
	{
		const float timeRatio = FMath::Clamp(CurrentTime_ / TimeToMove_, 0.0f, 1.0f);
		FVector currentLocation = Owner_->GetActorLocation();
		FVector nextLocation = FMath::Lerp(StartLocation_, StartLocation_ + EndLocationOffset_, timeRatio);
		Owner_->SetActorLocation(nextLocation);
	}
	

	// ...
}

