// Fill out your copyright notice in the Description page of Project Settings.


#include "BreakableCrate.h"

// Sets default values
ABreakableCrate::ABreakableCrate()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BoxMesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	BoxMesh->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ABreakableCrate::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABreakableCrate::Tick(float DeltaTime)
{
	timer--;
	Super::Tick(DeltaTime);
}

