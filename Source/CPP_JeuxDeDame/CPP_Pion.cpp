// Fill out your copyright notice in the Description page of Project Settings.

//Notes :
	//couleur Pion Blanc : "895E29FF"  
	//couleur pion Noir : "140E06FF"


#include "CPP_Pion.h"
#include "PC_Game.h"
#include <Kismet/GameplayStatics.h>

// Sets default values
ACPP_Pion::ACPP_Pion()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	

	//Ajout d'un static mesh component 
	MeshPion = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));

	//Ajout de la référence du Pion.fbx
	ConstructorHelpers::FObjectFinder<UStaticMesh>MeshFbx(TEXT(" / Script / Engine.StaticMesh'/Game/StaticMesh/pion.pion'"));

	// Set la variable StaticMesh
	if(MeshFbx.Object) MeshPion->SetStaticMesh(MeshFbx.Object);
	
	
	





}

// Called when the game starts or when spawned
void ACPP_Pion::BeginPlay()
{
	Super::BeginPlay();

	Fonction1();
	int N = Fonction3(10,5);
	UE_LOG(LogTemp, Warning, TEXT("%d"), N);
	if (false)
	{
		UE_LOG(LogTemp, Warning, TEXT("it's true"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("it's false"));
	}
	

	APC_Game* pcGame = Cast<APC_Game>(UGameplayStatics::GetPlayerController(GetWorld(), 0));


}


int ACPP_Pion::Fonction4(int N1, int N2)
{
	int N3 = N1 + N2;
	return N3;
}

void ACPP_Pion:: Fonction1()
{
	UE_LOG(LogTemp, Warning, TEXT("Salut"));
}

//void ACPP_Pion::Fonction2(int N)
//{
//	UE_LOG(LogTemp, Warning, TEXT("%d"), N);
//}

int ACPP_Pion::Fonction3(int N1, int N2)
{
	int N3 = N1 + N2;
	return N3;
}


// Called every frame
void ACPP_Pion::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACPP_Pion::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

