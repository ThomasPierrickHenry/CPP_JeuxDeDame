// Fill out your copyright notice in the Description page of Project Settings.


#include "PlateauCase.h"

// Sets default values
APlateauCase::APlateauCase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Slot = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	ConstructorHelpers::FObjectFinder<UStaticMesh>MeshFbx(TEXT("/Script/Engine.StaticMesh'/Game/StaticMesh/slot.slot'"));
	if (MeshFbx.Object) Slot->SetStaticMesh(MeshFbx.Object);

}

// Called when the game starts or when spawned
void APlateauCase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlateauCase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

//Définir quelle material utilisé pour la case
void APlateauCase::SetMyMaterial(bool Blanc)
{
    if (Blanc)
    {
        UMaterialInterface* WhiteMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("/Script/Engine.Material'/Game/Materiau/Mat_SlotBlanc.Mat_SlotBlanc'"));
        if (WhiteMaterial)
        {
            Slot->SetMaterial(0, WhiteMaterial);
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("Impossible de charger le matériau blanc"));
        }
    }
    else
    {
        UMaterialInterface* BlackMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("/Script/Engine.Material'/Game/Materiau/Mat_SlotNoir.Mat_SlotNoir'"));
        if (BlackMaterial)
        {
            Slot->SetMaterial(0, BlackMaterial);
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("Impossible de charger le matériau"));
        }
    }
}

