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

	GetCharacterMovement()->bUseControllerDesiredRotation = false;
	GetCharacterMovement()->JumpZVelocity = 600;
	GetCharacterMovement()->AirControl = 0.5;
	GetCharacterMovement()->bOrientRotationToMovement = true;
	FRotator rot(800, 800, 800);
	GetCharacterMovement()->RotationRate = rot;
}

// Called when the game starts or when spawned
void AMainPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

float AMainPlayer::getMoveDir() {
	return moveDir;
}

void AMainPlayer::moveRight(float axis) {
	GetCharacterMovement();
	FVector dir(0, axis, 0);
	AddMovementInput(dir,-1);
	moveDir = axis;
}

// Called every frame
void AMainPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	moveDir = 0;
}

// Called to bind functionality to input
void AMainPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AMainPlayer::Jump);

	PlayerInputComponent->BindAxis("MoveRight", this, &AMainPlayer::moveRight);
}

