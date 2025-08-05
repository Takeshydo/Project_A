// Fill out your copyright notice in the Description page of Project Settings.


#include "Perso_Principale.h"

// Sets default values
APerso_Principale::APerso_Principale()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APerso_Principale::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APerso_Principale::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APerso_Principale::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

