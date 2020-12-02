// Fill out your copyright notice in the Description page of Project Settings.


#include "MainPlayer.h"

// Sets default values
AMainPlayer::AMainPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArm = CreateDefaultSubobject<USpringArmComponent>("SpringArm");
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->TargetArmLength = 700.0f;
	SpringArm->bInheritYaw = false;

	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	Camera->SetupAttachment(SpringArm);

	//Sets Rotation speed
	FRotator rot(800, 800, 800);

	GetCharacterMovement()->bUseControllerDesiredRotation = false;
	GetCharacterMovement()->JumpZVelocity = 600;
	GetCharacterMovement()->AirControl = 0.5;
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = rot;
	GetCharacterMovement()->Mass = 1000;
}

// Called when the game starts or when spawned
void AMainPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMainPlayer::ShakeCamera(int maxDistance) {
	int xdistance = 1;
	int ydistance = 1;
	
	//Camera->
}

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
	//horDir = 0;
	verDir = 0;
	if (dashing == true) {
		Dash();
	}
	if (currShakeTime > 1) {
		FVector ShakeAmount(0, FMath::RandRange(-DashCameraShake, DashCameraShake), FMath::RandRange(-DashCameraShake, DashCameraShake));
		Camera->AddRelativeLocation(ShakeAmount);
		currShakeTime -= 1;
	}
	else if (currShakeTime == 1) {
		FVector returnPosition = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();
		returnPosition.X += SpringArm->TargetArmLength;
		Camera->SetWorldLocation(returnPosition);
		currShakeTime -= 1;
	}
}


//These functions just exist so you can tell whether or not the player is going to try to dash
void AMainPlayer::DashPrepare() {
	prepForDash = true;
}

void AMainPlayer::DashExecute() {
	prepForDash = false;
	dashDir = horDir;
	dashDistanceRemaining = dashDistance;
	dashing = true;
	currShakeTime = CameraShakeTimer;
}

//Actually makes the player Dash
void AMainPlayer::Dash() {
	FVector loc = GetActorLocation();
	if (dashDistanceRemaining - dashSpeed > 0) {
		loc.Y += (dashSpeed * (-dashDir)); //Takes the direction the player is pressing and multiplies it by the speed you want to dash
		SetActorLocation(loc, true); //Actually moves the character
		dashDistanceRemaining -= dashSpeed;
	}
	else {
		loc.Y += (dashDistanceRemaining * (-dashDir));
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

	PlayerInputComponent->BindAxis("VertMove", this, &AMainPlayer::moveUp);
	PlayerInputComponent->BindAxis("Move", this, &AMainPlayer::moveRight);
	
}

