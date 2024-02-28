// Fill out your copyright notice in the Description page of Project Settings.


#include "PC_Game.h"
#include <Kismet/GameplayStatics.h>
#include "BP_Camera.h"

APC_Game::APC_Game()
{
	// Voir le curseur de la souris
	bShowMouseCursor = true;
	//Activation des evenements du click gauche de la souris
	bEnableClickEvents = true;
	bEnableMouseOverEvents = true;

}


void APC_Game::BeginPlay()
{
	Super::BeginPlay();
	//Code effectuer au d�but de la partie

	//D�finir la Variable IndexPlayer en fonction du joueur
	PlayerIndex = GetMyIPlayerndex();
	UE_LOG(LogTemp, Warning, TEXT("%d"),PlayerIndex);

	//Poss�der la bonne camera
	PossessMyCamera();

}


//Renvoie l'index du player ; Index 0 = Player 1, Index 1 = Player 2
int APC_Game::GetMyIPlayerndex()
{
	if (IsLocalController())
	{
		if (HasAuthority())
		{
			UE_LOG(LogTemp, Warning, TEXT("Server"));
			return 0;
		}
	}
	return 1;
}

//Poss�der le Pawn Camera
void APC_Game::PossessMyCamera()
{
	// Appel de la fonction pour obtenir tous les acteurs d'une classe donn�e
	if (HasAuthority())
	{
		TArray<AActor*> FoundActors;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABP_Camera::StaticClass(), FoundActors);

		// Parcourir les acteurs trouv�s
		for (AActor* Actor : FoundActors)
		{
			ABP_Camera* Camera = Cast<ABP_Camera>(Actor);
			if (Camera->PlayerIndexCamera == PlayerIndex)
			{
				Possess(Camera);
				break;
			}
		}
	}
	
}