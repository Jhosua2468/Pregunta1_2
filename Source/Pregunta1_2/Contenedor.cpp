// Fill out your copyright notice in the Description page of Project Settings.


#include "Contenedor.h"
#include "Gato.h"
#include "GatoAgua.h"
#include "GatoArena.h"


// Sets default values
AContenedor::AContenedor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	CajaMesh = CreateDefaultSubobject<UStaticMeshComponent>("CajaMesh");
	RootComponent = CajaMesh;
	static ConstructorHelpers::FObjectFinder<UStaticMesh>Mesh(TEXT("StaticMesh'/Game/StarterContent/Props/Cardboard_box.Cardboard_box'"));

	CajaMaterial = LoadObject<UMaterial>(nullptr, TEXT("Material'/Game/StarterContent/Materials/M_Metal_Steel.M_Metal_Steel'"));
	CajaMesh->SetMaterial(0, CajaMaterial);

}

// Called when the game starts or when spawned
void AContenedor::BeginPlay()
{
	Super::BeginPlay();
	Ubicacion = FVector(0.0f, 0.0f, 0.0f);
	Rotacion = FRotator(0.0f, 90.0f, 0.0f);
	Medidas = FVector(0.0f, 0.0f, 0.0f);
	CajaMesh->SetRelativeLocation(Ubicacion);
	CajaMesh->SetRelativeRotation(Rotacion);
	CajaMesh->SetRelativeScale3D(Medidas);
}

// Called every frame
void AContenedor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AContenedor::MeterGatos(Gato* _gato, FString _tipoCat )
{
	Caja.Add( _tipoCat, _gato );
	GEngine->AddOnScreenDebugMessage(10, 10.0f, FColor::Yellow, TEXT("Se agrego al contenedor"));
}

