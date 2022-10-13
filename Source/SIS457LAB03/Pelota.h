// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include<iostream>

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Pelota.generated.h"

using namespace std;

UCLASS()
class SIS457LAB03_API APelota : public AActor
{
	GENERATED_BODY()
private:
	float PocicionPelotaX;
	float PocicionPelotaY;
	float VelocidadPelota;
	string TipoPelota;
public:	
	// Sets default values for this actor's properties
	APelota();

	void ExplotarPelota();
	void AcelerarPelota();
	void CambiarPelota();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
