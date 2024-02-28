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

	//On récupere le pointeur de mon player controller
	APC_Game* pcGame = Cast<APC_Game>(UGameplayStatics::GetPlayerController(GetWorld(), 0));

	//Activer la détection de survol du curseur 
	if (pcGame)
	{ 
		SetActorEnableCollision(true);
		MeshPion->OnBeginCursorOver.AddDynamic(this, &ACPP_Pion::OnMouseOverBegin);
		MeshPion->OnEndCursorOver.AddDynamic(this, &ACPP_Pion::OnMouseOverEnd);
	}
	
	//Set PlayerIndex
	PlayerIndex = GetMyPlayerIndex();
	//UE_LOG(LogTemp, Warning, TEXT("%d"),PlayerIndex);

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

void ACPP_Pion::OnMouseOverBegin(UPrimitiveComponent* TouchedComponent)
{
	// Code à exécuter lorsque la souris survole le pion
	if (PlayerIndex == IndexPionOwner)
	{
		SurvollerPion(2.f);
	}

}

void ACPP_Pion::OnMouseOverEnd(UPrimitiveComponent* TouchedComponent)
{
	// Code à exécuter lorsque la souris quitte le pion
	if (PlayerIndex == IndexPionOwner)
	{
		SurvollerPion(0.f);
	}
}

void ACPP_Pion::SurvollerPion(float emissiveColor)
{
	UMaterialInterface* Material = MeshPion->GetMaterial(0);
	UMaterialInstanceDynamic* InstanceMateriau = MeshPion->CreateAndSetMaterialInstanceDynamic(0);
	InstanceMateriau->SetScalarParameterValue("emissive", emissiveColor);
	MeshPion->SetMaterial(0, InstanceMateriau);

}

int ACPP_Pion::GetMyPlayerIndex()
{
	if (HasAuthority())return 0;
	else return 1;
}

