// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Destructible_Component.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BOMBERMANMECHANICS_API UDestructible_Component : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDestructible_Component();

private:
	AActor* Owner_ = nullptr;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	// -- FOR TESTING --
	/*FVector StartLocation_ = FVector::ZeroVector;

	UPROPERTY(EditAnywhere)
	FVector EndLocationOffset_ = FVector::ZeroVector;

	UPROPERTY(EditAnywhere)
	float TimeToMove_ = 2.0f;

	float CurrentTime_ = 0.0f;*/

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void DestroyViaBomb();
};
