// Fill out your copyright notice in the Description page of Project Settings.


#include "MainPlayer.h"

// Sets default values
AMainPlayer::AMainPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArm = CreateDefaultSubobject<USpringArmComponent>("SpringArm");
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->TargetArmLength = 900;
	SpringArm->bInheritYaw = false;

	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	Camera->SetupAttachment(SpringArm);
	CameraPos = Camera->GetComponentLocation();

	//Sets Rotation speed
	FRotator rot(800, 800, 800);

	GetCharacterMovement()->bUseControllerDesiredRotation = false;
	GetCharacterMovement()->JumpZVelocity = 550;
	GetCharacterMovement()->AirControl = 0.5;
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = rot;
	GetCharacterMovement()->Mass = 900;
}

// Called when the game starts or when spawned
	void AMainPlayer::BeginPlay()
	{
		Super::BeginPlay();
	
	}

//Code for horizontal and vertical movemnt
	float AMainPlayer::getMoveDir() {
		return horDir;
	}

	void AMainPlayer::moveRight(float axis) {
		if (!prepForDash && !dashing) {
			FVector dir(0, axis, 0);
			AddMovementInput(dir, -1);
		}
		horDir = axis;
	}


	void AMainPlayer::moveUp(float axis) {
		verDir = axis;
	}

// Called every frame
	void AMainPlayer::Tick(float DeltaTime)
	{
		Super::Tick(DeltaTime);
		if (dashing == true) {
			Dash();
		}
		ShakeCamera();
	}


	void AMainPlayer::ShakeCamera() {
		if (currShakeTime > 1) {
			FVector ShakeAmount(0, FMath::RandRange(-DashCameraShake, DashCameraShake), FMath::RandRange(-DashCameraShake, DashCameraShake));
			Camera->AddRelativeLocation(ShakeAmount);
			currShakeTime -= 1;
		}
		else if (currShakeTime == 1) {
			FVector returnPosition = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();
			returnPosition.X += SpringArm->TargetArmLength;
			returnPosition.X += CameraPos.X;
			currShakeTime -= 1;
		}
	}

//These functions just exist so you can tell whether or not the player is going to try to dash

	void AMainPlayer::DashPrepare() {
		//GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, "Hello", false);
		if (!dashing) {
			prepForDash = true;
			this->CustomTimeDilation = 0.24;
		}
	}

	void AMainPlayer::DashExecute() {
		prepForDash = false;
		horDashDir = horDir;
		verDashDir = verDir;
		dashDistanceRemaining = dashDistance;
		dashing = true;
		this->CustomTimeDilation = 1;
		currShakeTime = CameraShakeTimer;
	}

//Actually makes the player Dash
	void AMainPlayer::Dash() {
		FVector loc = GetActorLocation();
		if (dashDistanceRemaining - dashSpeed > 0) {
			loc.Y += (dashSpeed * (-horDashDir)); //Takes the direction the player is pressing and multiplies it by the speed you want to dash
			loc.Z += (dashSpeed * (verDashDir));
			SetActorLocation(loc, true); //Actually moves the character
			dashDistanceRemaining -= dashSpeed;
		}
		else {
			loc.Y += (dashDistanceRemaining * (-horDashDir));
			SetActorLocation(loc, true);
			dashing = false;
		}

	

	}

// Called to bind functionality to input
	void AMainPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
	{
		Super::SetupPlayerInputComponent(PlayerInputComponent);

		PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AMainPlayer::Jump);
		PlayerInputComponent->BindAction("PlayerDash", IE_Pressed, this, &AMainPlayer::DashPrepare);
		PlayerInputComponent->BindAction("PlayerDash", IE_Released, this, &AMainPlayer::DashExecute);

		PlayerInputComponent->BindAxis("VerticalMove", this, &AMainPlayer::moveUp);
		PlayerInputComponent->BindAxis("Move", this, &AMainPlayer::moveRight);
	
	}

