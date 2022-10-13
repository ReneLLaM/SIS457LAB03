// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include <iostream>
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Mapa.generated.h"

using namespace std;

UCLASS()
class SIS457LAB03_API AMapa : public AActor
{
	GENERATED_BODY()
private:
	float TamanoMapa;
	string DificultadMapa;
	int32 NivelMapa;
public:	
	// Sets default values for this actor's properties
	AMapa();
	void CambiarMapa();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
