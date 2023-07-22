// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Gato.h"
#include "GatoArena.generated.h"

/**
 * 
 */
UCLASS()
class PREGUNTA1_2_API AGatoArena : public AGato
{
	GENERATED_BODY()
public:
	AGatoArena();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	//Funcion que realiza una accion
	virtual void Accion() override;

};
