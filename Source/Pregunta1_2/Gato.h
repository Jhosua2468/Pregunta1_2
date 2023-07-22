// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Gato.generated.h"

UCLASS(Abstract)
class PREGUNTA1_2_API AGato : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGato();

protected:
	UPROPERTY()
		UStaticMeshComponent* MeshCat;
	UPROPERTY()
		UMaterial* MaterialCat;
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	//Funcion que realiza una accion
	virtual void Accion() PURE_VIRTUAL(AGato::Accion, ;);
	FVector Location;
	FRotator Rotation;
	FVector Scale;

};
