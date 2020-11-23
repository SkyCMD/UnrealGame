// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

#include "MainPlayer.generated.h"

UCLASS()
class UNREALGAME_API AMainPlayer : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMainPlayer();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
		USpringArmComponent* SpringArm;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
		UCameraComponent* Camera;
		

	UFUNCTION(BlueprintPure, Category = "Movement")
		float getMoveDir();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Code used for basic movement
	float horDir;
	float verDir;

	void moveRight(float);
	void moveUp(float);

	//Code used for dashing
	int dashDistanceRemaining;
	float dashDir;
	bool prepForDash;
	bool dashing;
	//This is the total distance the player will travel
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dash")
		int dashDistance = 700;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dash")
		int dashSpeed = 100;
	void DashExecute();
	void DashPrepare();
	void Dash();


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
