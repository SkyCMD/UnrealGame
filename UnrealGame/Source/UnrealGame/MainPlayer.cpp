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
	currZoom = SpringArm->TargetArmLength;
	zoomLevel = currZoom;

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

// Called every frame
void AMainPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

		if (Dashing == true){
			Dash();
			GetCharacterMovement()->GravityScale = 0;
			if (HitBox) {
				if (freezeFrameTimer > 1) {
					currShakeTime = CameraShakeTimer;
					ShakeCamera(CameraShakeDistance * 2, CameraShakeDistance * 2);
					freezeFrameTimer--;
				}
				else {
					HitBox = false;
				}
			}
			else {
				ShakeCamera(CameraShakeDistance, CameraShakeDistance);
			}
		}
		else {
			GetCharacterMovement()->GravityScale = 4;
		}
		ZoomCamera();
}


// Called when the game starts or when spawned
	void AMainPlayer::BeginPlay()
	{
		Super::BeginPlay();
		startPos = GetActorLocation();
	}

//Code for horizontal and vertical movemnt
	float AMainPlayer::getMoveDir() {
		return horDir;
	}

	void AMainPlayer::moveRight(float axis) {
		if (!prepForDash && !Dashing) {
			FVector dir(0, axis, 0);
			AddMovementInput(dir, -1);
		}
		horDir = axis;
	}


	void AMainPlayer::moveUp(float axis) {
		verDir = axis;
	}


//Dash Code
	//These functions just exist so you can tell whether or not the player is going to try to dash
	void AMainPlayer::DashPrepare() {
		//GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, "Hello", false);
		if (!Dashing && CanDash) {
			prepForDash = true;
			this->CustomTimeDilation = 0.24;
		}
	}

	void AMainPlayer::DashExecute() {
		if (CanDash) {
			prepForDash = false;
			CanDash = false;
			horDashDir = horDir;
			verDashDir = verDir;
			dashDistanceRemaining = dashDistance;
			Dashing = true;
			this->CustomTimeDilation = 1;
			currShakeTime = CameraShakeTimer;
		}
	}

	//Actually makes the player Dash
	void AMainPlayer::Dash() {
		FVector dashY = GetActorLocation();
		FVector dashZ = GetActorLocation();
		if (dashDistanceRemaining - dashSpeed > 0) {
			dashY.Y += (dashSpeed * (-horDashDir)); //Takes the direction the player is pressing and multiplies it by the speed you want to dash
			SetActorLocation(dashY, true);
			dashZ = GetActorLocation();
			dashZ.Z += (dashSpeed * (verDashDir));
			//verDashDir *= .95
			SetActorLocation(dashZ, true);
			dashDistanceRemaining -= dashSpeed;
		}
		else {
			dashY.Y += (dashDistanceRemaining * (-horDashDir));
			//dashZ.Z += (dashSpeed * (verDashDir));
			SetActorLocation(dashY, true);
			SetActorLocation(dashZ, true);
			Dashing = false;
		}
	}

//Camera Shake Code
	void AMainPlayer::ShakeCamera(int rangeX, int rangeY) {
		if (currShakeTime > 1) {
			FVector ShakeAmount(0, FMath::RandRange(-rangeX, rangeX), FMath::RandRange(-rangeY, rangeY));
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
//Code for zooming camera in and out
	void AMainPlayer::ZoomCamera() {
		if (currZoom < zoomLevel) {
			if (currZoom + zoomSpeed < zoomLevel) {
				SpringArm->TargetArmLength += zoomSpeed;
				currZoom += zoomSpeed;
			}
			else {
				SpringArm->TargetArmLength = zoomLevel;
				currZoom = zoomLevel;
			}
		}
		else if(currZoom > zoomLevel) {
			if (currZoom - zoomSpeed > zoomLevel) {
				SpringArm->TargetArmLength -= zoomSpeed;
				currZoom -= zoomSpeed;
			}
			else {
				SpringArm->TargetArmLength = zoomLevel;
				currZoom = zoomLevel;
			}
		}




		if (currZoom+zoomSpeed < FMath::Abs(zoomLevel)) {
			SpringArm->TargetArmLength += zoomSpeed*(zoomLevel/FMath::Abs(zoomLevel));
			currZoom += zoomSpeed;
		}
		else if (currZoom < FMath::Abs(zoomLevel)) {
			SpringArm->TargetArmLength += zoomLevel - (currZoom*(zoomLevel / FMath::Abs(zoomLevel)));
			currZoom = FMath::Abs(zoomLevel)+1;
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

