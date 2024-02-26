// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


// "Camera\CameraComponent.h"  Ajout du component Camera
#include "Camera/CameraComponent.h"



#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BP_Camera.generated.h"

UCLASS()
class CPP_JEUXDEDAME_API ABP_Camera : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABP_Camera();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	/////COmposants////

	//Camera du joueur//

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Caméra")
	UCameraComponent* CameraPlayer;

};
