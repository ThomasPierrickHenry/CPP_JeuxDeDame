// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


// "Components\StaticMeshComponent.h"  Ajout du component Static Mesh

#include "Components/StaticMeshComponent.h"


#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "CPP_Pion.generated.h"

UCLASS()
class CPP_JEUXDEDAME_API ACPP_Pion : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACPP_Pion();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void Fonction1();
	/*void Fonction2(int N);*/
	int Fonction3(int N1, int N2);
	int Fonction4(int N1, int N2);

protected: 
	/////COmposants////

	//Static Mesh du Pion//

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="StaticMesh")
	UStaticMeshComponent* MeshPion;
	

};
