// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "MovingPlatform.generated.h"

UCLASS()
class UNREALGAME_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();
	AMovingPlatform(int, int, int, int, int, int, bool);
	UGameplayStatics* stats;

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
	UPROPERTY(EditAnywhere, Category = "Movement Options")
		bool reverseAtEnd;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement Options")
		bool reachedEnd = false;
	bool CheckIfComplete(int, int);
	
	//Leave at 0 if you want it to be active no matter what
	UPROPERTY(EditAnywhere, Category = "Movement Options")
		bool useActivationBox;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Movement")
		bool startMoving;
	void Move();
	void Reverse();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
