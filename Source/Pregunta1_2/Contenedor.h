// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Contenedor.generated.h"

UCLASS()
class PREGUNTA1_2_API AContenedor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AContenedor();
	UPROPERTY()
		UStaticMeshComponent* CajaMesh;
	UPROPERTY()
		UMaterial* CajaMaterial;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	FVector Ubicacion;
	FRotator Rotacion;
	FVector Medidas;
	TMap<FString, class Gato* >Caja = {};
	void MeterGatos(class Gato* _gato,FString _tipoCat);

};
