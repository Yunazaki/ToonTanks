// Fill out your copyright notice in the Description page of Project Settings.


#include "Tower.h"
#include "Tank.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"

void ATower::BeginPlay()
{
	Super::BeginPlay();

	tank = Cast<ATank>(UGameplayStatics::GetPlayerPawn(this, 0));

	GetWorldTimerManager().SetTimer(fireRateTimer, this, &ATower::CheckFireCondition, fireRate, true);
}

void ATower::Tick(float deltaTime)
{
	Super::Tick(deltaTime);

	if (InFireRange())
	{
		RotateTurret(tank->GetActorLocation());
	}

}

void ATower::HandleDestruction()
{

	Super::HandleDestruction();

	Destroy();

}

void ATower::CheckFireCondition()
{

	if (InFireRange())
	{
		Fire();
	}

}

bool ATower::InFireRange()
{
	if (!tank) return false;

	float distance = FVector::Dist(GetActorLocation(), tank->GetActorLocation());

	if (distance <= fireRange)
	{
		return true;
	}

	return false;
}