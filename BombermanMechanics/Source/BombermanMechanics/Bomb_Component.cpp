// Fill out your copyright notice in the Description page of Project Settings.


#include "Bomb_Component.h"

#include "Components/SphereComponent.h"
#include "TimerManager.h"
#include "Destructible_Component.h"

// Sets default values for this component's properties
UBomb_Component::UBomb_Component()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	Owner_ = GetOwner();

	if (Owner_)
	{
		USceneComponent* root = Owner_->GetRootComponent();

		if (!ExplosionAOESphere_ && root)
		{
			ExplosionAOESphere_ = CreateDefaultSubobject<USphereComponent>(TEXT("ExplosionAOESphere"));
			ExplosionAOESphere_->InitSphereRadius(ExplosionRadius_);
			ExplosionAOESphere_->SetupAttachment(root);
		}
	}

	// ...
}


// Called when the game starts
void UBomb_Component::BeginPlay()
{
	Super::BeginPlay();

	if (Owner_)
	{
		Place(Owner_->GetActorLocation());
	}
	
	// ...
	
}


void UBomb_Component::OnExplode()
{
	if (ExplosionAOESphere_)
	{
		TArray<AActor*> overlappingActors;
		ExplosionAOESphere_->GetOverlappingActors(overlappingActors);

		for (AActor* actor : overlappingActors)
		{

			UDestructible_Component* destructComp = actor->FindComponentByClass<UDestructible_Component>();
			if (destructComp)
			{
				destructComp->DestroyViaBomb();
			}
		}

		UWorld* world = GetWorld();

		if (world)
		{
			world->GetTimerManager().ClearTimer(DelayTimerHandle_);
		}

		if (Owner_)
		{
			Owner_->Destroy();
		}
	}
}

// Called every frame
void UBomb_Component::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UBomb_Component::Place(FVector location)
{
	UWorld* world = GetWorld();

	if (world)
	{
		world->GetTimerManager().SetTimer(DelayTimerHandle_, this, &UBomb_Component::OnExplode, ExplosionDelayTime_);
	}
}

