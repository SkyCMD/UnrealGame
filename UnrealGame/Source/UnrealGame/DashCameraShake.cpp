// Fill out your copyright notice in the Description page of Project Settings.


#include "DashCameraShake.h"
#include "MainPlayer.h"

UDashCameraShake::UDashCameraShake() {
	OscillationDuration = .25;
	OscillationBlendInTime = 0.0005;
	OscillationBlendOutTime = 0.0005;

	RotOscillation.Pitch.Amplitude = FMath::RandRange(0, 1);
	RotOscillation.Pitch.Frequency = FMath::RandRange(5, 25);

	RotOscillation.Yaw.Amplitude = FMath::RandRange(0, 1);
	RotOscillation.Yaw.Frequency = FMath::RandRange(5, 25);
}