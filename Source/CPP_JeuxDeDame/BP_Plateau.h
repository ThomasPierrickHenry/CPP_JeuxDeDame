// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

// "Components\StaticMeshComponent.h"  Ajout du component Static Mesh


#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "PlateauCase.h"
#include "Containers/Array.h"
#include "BP_Plateau.generated.h"


UCLASS()
class CPP_JEUXDEDAME_API ABP_Plateau : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABP_Plateau();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	/////COmposants////
	//Static Mesh Plateau
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "StaticMesh")
	UStaticMeshComponent* Plateau;

	//Array PlateauCase des Emplacements du plateau//
	TArray<TObjectPtr<APlateauCase>> Slot;
	
		/*UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "StaticMesh")
	UStaticMeshComponent* Slot[10][10];*/

protected:
	//fonction Initialiser les static mesh//
	void CreateSlotMesh();

public:
	//Fonction Set matérials 
	UFUNCTION(BlueprintCallable, Category = "Materials")
	static void SetMyMaterials(UStaticMeshComponent* SlotComponent, FString MaterialsPath);

public:
	//
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int NbRow = 10;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int NbColumn = 10;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<APlateauCase> CaseType;


};


//4 case de la 3eme ligne 
//(3*10)+4
