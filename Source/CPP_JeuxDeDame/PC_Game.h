// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PC_Game.generated.h"

/**
 * 
 */
UCLASS()
class CPP_JEUXDEDAME_API APC_Game : public APlayerController
{
	GENERATED_BODY()


protected:
	APC_Game();
	virtual void BeginPlay() override;

protected:
	//UPROPERTY(Replicated)
	int PlayerIndex = -1;
	int GetMyIPlayerndex();


protected:
	//Définir la fonction PossessCamera
	void PossessMyCamera();
	
};
