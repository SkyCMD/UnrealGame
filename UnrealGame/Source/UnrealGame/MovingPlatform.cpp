// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

AMovingPlatform::AMovingPlatform(int xDistance, int yDistance, int zDistance, int xSpeed, int ySpeed, int zSpeed, bool reverseAtEnd) {
	this->xDistance = xDistance;
	this->yDistance = yDistance;
	this->zDistance = zDistance;
	this->xSpeed = xSpeed;
	this->ySpeed = ySpeed;
	this->zSpeed = zSpeed;
	this->reverseAtEnd = reverseAtEnd;
};

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();
	if (xDistance < 0) {
		xDistance = FMath::Abs(xDistance);
		xSpeed = -xSpeed;
	}
	if (yDistance < 0) {
		yDistance = FMath::Abs(yDistance);
		ySpeed = -ySpeed;
	}
	if (zDistance < 0) {
		zDistance = FMath::Abs(zDistance);
		zSpeed = -zSpeed;
	}
}

void AMovingPlatform::Move() {
	FVector position = GetActorLocation();
	if (currXPos < xDistance) {
		position.X += xSpeed;
		currXPos += FMath::Abs(xSpeed);
	}

	if (currYPos < yDistance) {
		position.Y += ySpeed;
		currYPos += FMath::Abs(ySpeed);
	}

	if (currZPos < zDistance) {
		position.Z += zSpeed;
		currZPos += FMath::Abs(zSpeed);
	}
	if (reverseAtEnd) {
		Reverse();
	}
	SetActorLocation(position);
}
//GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, "Hello", false);
void AMovingPlatform::Reverse() {
	if(currXPos >= xDistance) {
		xSpeed = -xSpeed;
		currXPos = 0;
	}
	if(currYPos >= yDistance) {
		ySpeed = -ySpeed;
		currYPos = 0;
	}
	if(currZPos >= zDistance) {
		zSpeed = -zSpeed;
		currZPos = 0;
	}
}
// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	
	Super::Tick(DeltaTime);
	if (activateWithinDistance != 0) {
		int distance = GetDistanceTo(GetWorld()->GetFirstPlayerController()->GetPawn());
		if (distance < activateWithinDistance) {
			Move();
		}
	}
	else {
		Move();
	}
	
}

