// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Pregunta1_2GameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class PREGUNTA1_2_API APregunta1_2GameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	APregunta1_2GameModeBase();
	virtual void Tick(float DeltaTime) override;
protected:
	virtual void BeginPlay() override;
	class AGatoArena* GatoArena = nullptr;
	class AGatoAgua* GatoAgua = nullptr;
	int cont1;
	int cont2;
	int tipo;
	float Tiempo;
	float ControlTiempo;
	class AContenedor* CajaCat;
};
