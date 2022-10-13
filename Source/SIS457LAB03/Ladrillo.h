// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include<iostream>
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Ladrillo.generated.h"

using namespace std;
UCLASS()
class SIS457LAB03_API ALadrillo : public AActor
{
	GENERATED_BODY()
	
private:
	int32 PosicionLadrilloX;
	int32 PosicionLadrilloY;
	string TipoLadrillo;
	int32 TamanoLadrillo;
	
public:	
	// Sets default values for this actor's properties
	ALadrillo();
	void DestruirLadrillo();
	void CrearLadrillo();



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
