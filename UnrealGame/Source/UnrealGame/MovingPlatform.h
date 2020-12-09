// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class UNREALGAME_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	int currXPos;
	int currYPos;
	int currZPos;
	UPROPERTY(EditAnywhere, Category = "Movement")
		int xDistance;
	UPROPERTY(EditAnywhere, Category = "Movement")
		int yDistance;
	UPROPERTY(EditAnywhere, Category = "Movement")
		int zDistance;
	UPROPERTY(EditAnywhere, Category = "Movement")
		int zSpeed;
	UPROPERTY(EditAnywhere, Category = "Movement")
		int ySpeed;
	UPROPERTY(EditAnywhere, Category = "Movement")
		int xSpeed;

	void Move();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
