// Fill out your copyright notice in the Description page of Project Settings.


#include "BP_Camera.h"

// Sets default values
ABP_Camera::ABP_Camera()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	//Camera Pawn

	// variable = CameraPlayer
	CameraPlayer = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraPlayer"));

	// Définir l'angle de la camera
	CameraPlayer->SetRelativeRotation(FRotator(-85.f, 0.f, 0.f));

	//définir le POV de la camera 
	CameraPlayer->FieldOfView = 120.f;


}

// Called when the game starts or when spawned
void ABP_Camera::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABP_Camera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABP_Camera::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

