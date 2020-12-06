// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "BreakableCrate.generated.h"



UCLASS()
class UNREALGAME_API ABreakableCrate : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABreakableCrate();
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Beh")
		int timer = 200;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Beh")
		bool broken = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Mesh")
		UStaticMeshComponent* BoxMesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
