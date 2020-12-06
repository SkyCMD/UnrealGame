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
	float horDashDir;
	float verDashDir;
	int currShakeTime;
	FVector CameraPos;

	UPROPERTY(VisibleAnywhere, BluePrintReadOnly, Category = "Dash")
		bool prepForDash;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Dash")
		bool dashing;

	//This is the total distance the player will travel
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dash")
		int dashDistance = 700;
	//The number of pixels the player will travel per second
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dash")
		int dashSpeed = 100;
	//Maximum amount of pixels the camera will shake per frame
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dash")
		int DashCameraShake = 3;
	//Number of frames the camera will shake for
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dash")
		int CameraShakeTimer = 10;

	//Dash Methods
		void DashExecute();
		void DashPrepare();
		void Dash();
	//Camera shake
		void ShakeCamera();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
