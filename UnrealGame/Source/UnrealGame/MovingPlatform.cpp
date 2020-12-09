// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();
}

void AMovingPlatform::Move() {
	FVector position = GetActorLocation();
	if (currXPos < xDistance) {
		position.X += xSpeed;
		currXPos += FMath::Abs(xSpeed);
	}
	else {
		xSpeed = -xSpeed;
		currXPos = 0;
	}
	if (currYPos < yDistance) {
		position.Y += ySpeed;
		currYPos += FMath::Abs(ySpeed);
	}
	else {
		ySpeed = -ySpeed;
		currYPos = 0;
	}
	if (currZPos < zDistance) {
		position.Z += zSpeed;
		currZPos += FMath::Abs(zSpeed);
	}
	else {
		zSpeed = -zSpeed;
		currZPos = 0;
	}

	SetActorLocation(position);
}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Move();
}

