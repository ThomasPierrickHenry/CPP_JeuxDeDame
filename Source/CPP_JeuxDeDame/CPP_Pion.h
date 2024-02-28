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


	//Appellé quand la souris passe sur le pion
	UFUNCTION()
	void OnMouseOverBegin(UPrimitiveComponent* TouchedComponent);
	UFUNCTION()
	//Appellé ne passe plus la souris sur le pion
	void OnMouseOverEnd(UPrimitiveComponent* TouchedComponent);


protected: 
	/////COmposants////

	//Static Mesh du Pion//

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="StaticMesh")
	UStaticMeshComponent* MeshPion;

	//Variable Index du propriétaire du pion défini dans l'éditeur
	UPROPERTY(EditAnywhere, BlueprintReadOnly  , Category = "Integer")
	int IndexPionOwner = 0;
	

protected:
	void SurvollerPion(float emissiveColor);

protected:
	//Variable Index Player défini a partir du Player controller
	int PlayerIndex = -2;
	//Fonction Renvoie l'index du player
	int GetMyPlayerIndex();
};
