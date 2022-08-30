// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include "Bomb_Component.generated.h"

class USphereComponent;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BOMBERMANMECHANICS_API UBomb_Component : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UBomb_Component();

private:
	AActor* Owner = nullptr;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	float ExplosionRadius_ = 250.0f;

	UPROPERTY(EditAnywhere)
	USphereComponent* ExplosionAOESphere_ = nullptr;

	UPROPERTY(EditAnywhere)
	float ExplosionDelayTime_ = 5.0f;

	UPROPERTY()
	FTimerHandle DelayTimerHandle_;

	UFUNCTION()
	void OnExplode();

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void Place(FVector location);
};
