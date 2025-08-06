// Fill out your copyright notice in the Description page of Project Settings.


#include "Perso_Principale.h"
#include "GameFramework/CharacterMovementComponent.h" 
#include "GameFramework/Controller.h"
#include "EngineUtils.h"


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
	
	//Input des Axis PLayers
	PlayerInputComponent->BindAxis("MoveX", this, &APerso_Principale::MoveX);
	PlayerInputComponent->BindAxis("MoveY", this, &APerso_Principale::MoveY);


}

//Fonction Movement / Ground

void APerso_Principale::MoveX(float Value) {
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void APerso_Principale::MoveY(float Value) {
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		AddMovementInput(Direction, Value);
	}
}

// Début fonction saut/dash
