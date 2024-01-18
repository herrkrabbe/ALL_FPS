// Fill out your copyright notice in the Description page of Project Settings.


#include "ALL_FPS_Unreal/Character/ALLCharacter.h"

// Sets default values
AALLCharacter::AALLCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AALLCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AALLCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AALLCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

