// Fill out your copyright notice in the Description page of Project Settings.


#include "BombInventory_Component.h"

#include "Bomb_Component.h"

// Sets default values for this component's properties
UBombInventory_Component::UBombInventory_Component()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	Owner_ = GetOwner();

	// ...
}


// Called when the game starts
void UBombInventory_Component::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


void UBombInventory_Component::DropBomb()
{
	if (BombSpawn_)
	{
		UWorld* world = GetWorld();

		if (world)
		{
			
		}
	}
}

// Called every frame
void UBombInventory_Component::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

