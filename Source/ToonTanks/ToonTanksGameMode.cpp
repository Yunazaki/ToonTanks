// Fill out your copyright notice in the Description page of Project Settings.


#include "ToonTanksGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Tank.h"
#include "Tower.h"
#include "ToonTanksPlayerController.h"

void AToonTanksGameMode::BeginPlay()
{

	Super::BeginPlay();

	HandleGameStart();

}

void AToonTanksGameMode::ActorDied(AActor * deadActor)
{
	if (deadActor == tank)
	{
		tank->HandleDestruction();
		if (toonTanksPlayerController)
		{
			toonTanksPlayerController->SetPlayerEnabledState(false);
		}
		GameOver(false);
	}
	else if (ATower* destroyedTower = Cast<ATower>(deadActor))
	{
		destroyedTower->HandleDestruction();
	}
}

void AToonTanksGameMode::HandleGameStart()
{

	StartGame();

	tank = Cast<ATank>(UGameplayStatics::GetPlayerPawn(this, 0));
	toonTanksPlayerController = Cast<AToonTanksPlayerController>(UGameplayStatics::GetPlayerController(this, 0));

	if (toonTanksPlayerController)
	{
		toonTanksPlayerController->SetPlayerEnabledState(false);

		FTimerHandle playerEnableTimerHandle;

		FTimerDelegate timerDelegate = FTimerDelegate::CreateUObject(
			toonTanksPlayerController,
			&AToonTanksPlayerController::SetPlayerEnabledState,
			true
		);
		GetWorldTimerManager().SetTimer(playerEnableTimerHandle, timerDelegate, startDelay, false);
	}

}

int32 AToonTanksGameMode::GetTargetTowerCount()
{
	TArray<AActor*> towers;
	UGameplayStatics::GetAllActorsOfClass(this, ATower::StaticClass(), towers);
	
	return towers.Num();
}

