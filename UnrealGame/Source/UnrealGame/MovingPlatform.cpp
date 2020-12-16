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
	startMoving = !useActivationBox;
	startPos = K2_GetActorLocation();
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
	else if (CheckIfComplete(currXPos, xDistance) || CheckIfComplete(currYPos, yDistance) || CheckIfComplete(currZPos, zDistance)) {
		reachedEnd = true;
	}
	SetActorLocation(position);
}

void AMovingPlatform::Reverse() {
	if(currXPos >= xDistance && xDistance != 0) {
		xSpeed = -xSpeed;
		currXPos = 0;
	}
	if(currYPos >= yDistance && yDistance != 0) {
		ySpeed = -ySpeed;
		currYPos = 0;
	}
	if(currZPos >= zDistance && zDistance != 0) {
		zSpeed = -zSpeed;
		currZPos = 0;
		if (startReturning) {
			startMoving = false;
		}
	}

}

bool AMovingPlatform::CheckIfComplete(int axis, int endPoint) {
	if (axis < endPoint || endPoint == 0) {
		return false;
	}
	return true;
}

int AMovingPlatform::ReturnToStart() {
	if (zSpeed < 0) {
		zSpeed = -zSpeed;
		currZPos = 0;
	}
	startReturning = true;
	return 0;
}
// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (!reachedEnd && startMoving) {
		Move();
	}

}

