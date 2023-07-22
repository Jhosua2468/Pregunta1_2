

// Fill out your copyright notice in the Description page of Project Settings.


#include "GatoAgua.h"

AGatoAgua::AGatoAgua()
{
	ConstructorHelpers::FObjectFinder<UStaticMesh>Mesh(TEXT("StaticMesh'/Game/StarterContent/Props/cat.cat'"));
	MeshCat->SetStaticMesh(Mesh.Object);
	MaterialCat = LoadObject<UMaterial>(nullptr, TEXT("Material'/Game/StarterContent/Materials/M_Water_Lake.M_Water_Lake'"));
	MeshCat->SetMaterial(0, MaterialCat);
}

void AGatoAgua::BeginPlay()
{
	Super::BeginPlay();
	Location = FVector(0.0f, 0.0f, 100.0f);
	Rotation = FRotator(0.0f, 0.0f, 0.0f);
	Scale = FVector(0.1f, 0.1f, 0.1f);
	MeshCat->SetRelativeLocation(Location);
	MeshCat->SetRelativeRotation(Rotation);
	MeshCat->SetRelativeScale3D(Scale);
}

void AGatoAgua::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AGatoAgua::Accion()
{
	auto Tamano = this->GetActorScale3D();
	Tamano += FVector(0.0001f, 0.0001f, 0.0001f);
	this->SetActorScale3D(Tamano);
}
