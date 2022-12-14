// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BombInventory_Component.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BOMBERMANMECHANICS_API UBombInventory_Component : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UBombInventory_Component();

private:
	AActor* Owner_ = nullptr;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	UClass* BombSpawn_ = nullptr;

	UPROPERTY(EditAnywhere)
	bool bHasBomb_ = false;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
