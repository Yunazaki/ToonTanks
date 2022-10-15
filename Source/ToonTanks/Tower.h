// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"
#include "Tower.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS_API ATower : public ABasePawn
{
	GENERATED_BODY()

protected:

	virtual void BeginPlay() override;

private:

	class ATank* tank;

	UPROPERTY(EditAnywhere)
		float fireRange = 300.f;

	UPROPERTY(EditAnywhere)
		float fireRate = 2.f;

	FTimerHandle fireRateTimer;

	void CheckFireCondition();

	bool InFireRange();

public:

	virtual void Tick(float deltaTime) override;

	void HandleDestruction();

};
