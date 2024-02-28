// Fill out your copyright notice in the Description page of Project Settings.


#include "BP_Plateau.h"

// Sets default values
ABP_Plateau::ABP_Plateau()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//PLateau
	Plateau = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	ConstructorHelpers::FObjectFinder<UStaticMesh>MeshFbx(TEXT("/Script/Engine.StaticMesh'/Game/StaticMesh/plateau.plateau'"));
	if (MeshFbx.Object) Plateau->SetStaticMesh(MeshFbx.Object);
	//Plateau->SetupAttachment(RootComponent);

	
}

// Called when the game starts or when spawned
void ABP_Plateau::BeginPlay()
{
	Super::BeginPlay();

	//Slot
	CreateSlotMesh();
}

// Called every frame
void ABP_Plateau::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



//fonction de la creation des ChildActors (Cases du plateau)

void ABP_Plateau::CreateSlotMesh()
{
	for (int i = 0; i < NbRow; i++)
	{
		for (int j = 0; j < NbColumn; j++)
		{
			int CaseIndex = (i * NbRow) + j;
			APlateauCase* NewCase;
			NewCase = GetWorld()->SpawnActor<APlateauCase>(CaseType);
			NewCase->AttachToActor(this, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
			//Set Location 
			NewCase->SetActorRelativeLocation(FVector(100.f * i, 100.f * j, 0));	
			//Set material
			if (!(NbRow % 2))
			{
				if (i % 2)
				{
					if (CaseIndex % 2)
					{
						NewCase->SetMyMaterial(1);
					}
					else
					{
						NewCase->SetMyMaterial(0);
					}
				}
				else
				{
					if (CaseIndex % 2)
					{
						NewCase->SetMyMaterial(0);
					}
					else
					{
						NewCase->SetMyMaterial(1);
					}
				}
			}
			else
			{
				if (CaseIndex % 2)
				{
					NewCase->SetMyMaterial(1);
				}
				else
				{
					NewCase->SetMyMaterial(0);
				}
			}
			
			Slot.Add(NewCase);
		}

	}

}


//fonction Définir un matériau sur un staticMesh
void ABP_Plateau::SetMyMaterials(UStaticMeshComponent* SlotComponent,FString MaterialsPath)
{
	
	//Material Slot Blanc "/Script/Engine.Material'/Game/Materiau/Mat_SlotBlanc.Mat_SlotBlanc'"
	// Material Slot Noir "/Script/Engine.Material'/Game/Materiau/Mat_SlotNoir.Mat_SlotNoir'"
	// Load Material
	UMaterialInterface* Material = LoadObject<UMaterialInterface>(nullptr, *MaterialsPath);
	//Apply material to static mesh
	SlotComponent->SetMaterial(0, Material);
	SlotComponent->PostEditChange();
}

