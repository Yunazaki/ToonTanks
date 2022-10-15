// Fill out your copyright notice in the Description page of Project Settings.


#include "Tank.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"


ATank::ATank()
{
	springArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	springArm->SetupAttachment(RootComponent);

	camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	camera->SetupAttachment(springArm);
}

void ATank::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &ATank::Move);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &ATank::Turn);

	PlayerInputComponent->BindAction(TEXT("Fire"), IE_Pressed, this, &ATank::Fire);
}

void ATank::BeginPlay()
{
	Super::BeginPlay();

	tankPlayerController = Cast<APlayerController>(GetController());
}

void ATank::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FHitResult hitResult = GetHitResult();
	RotateTurret(hitResult.ImpactPoint);
}

void ATank::HandleDestruction()
{

	Super::HandleDestruction();

	SetActorHiddenInGame(true);
	SetActorTickEnabled(false);

}

void ATank::Move(float value)
{
	float deltaTime = UGameplayStatics::GetWorldDeltaSeconds(this);

	FVector deltaLocation = FVector::ZeroVector;
	deltaLocation.X = value * deltaTime * moveSpeed;
	AddActorLocalOffset(deltaLocation, true);
}

void ATank::Turn(float value)
{
	float deltaTime = UGameplayStatics::GetWorldDeltaSeconds(this);

	FRotator deltaRotation = FRotator::ZeroRotator;
	deltaRotation.Yaw = value * deltaTime * turnSpeed;
	AddActorLocalRotation(deltaRotation, true);
}

FHitResult ATank::GetHitResult()
{
	FHitResult hitResult;
	if (tankPlayerController)
	{
		tankPlayerController->GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, false, hitResult);
	}
	return hitResult; 
}


