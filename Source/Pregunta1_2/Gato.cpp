// Fill out your copyright notice in the Description page of Project Settings.


#include "Gato.h"

// Sets default values
AGato::AGato()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	MeshCat = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshCat"));
	RootComponent = MeshCat;
}

// Called when the game starts or when spawned
void AGato::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGato::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
