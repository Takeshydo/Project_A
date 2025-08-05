// Fill out your copyright notice in the Description page of Project Settings.


#include "Perso_Principal.h"

// Sets default values
APerso_Principal::APerso_Principal()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APerso_Principal::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APerso_Principal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APerso_Principal::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

