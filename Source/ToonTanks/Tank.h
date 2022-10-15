// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"
#include "Tank.generated.h"

/**
 * 
 */
UCLASS()
class TOONTANKS_API ATank : public ABasePawn
{
	GENERATED_BODY()

public:

	ATank();

	void HandleDestruction();

	APlayerController* GetTankPlayerController() const { return tankPlayerController; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

	UPROPERTY(VisibleAnywhere, Category = "Components")
		class USpringArmComponent* springArm;

	UPROPERTY(VisibleAnywhere, Category = "Components")
		class UCameraComponent* camera;

	void Move(float value);

	void Turn(float value);

	FHitResult GetHitResult();

public:

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void Tick(float DeltaTime) override;

	APlayerController* tankPlayerController;

	UPROPERTY(EditAnywhere, Category = "Movement")
		float moveSpeed = 500.f;

	UPROPERTY(EditAnywhere, Category = "Movement")
		float turnSpeed = 200.f;
};
