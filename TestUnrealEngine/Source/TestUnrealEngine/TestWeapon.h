// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestWeapon.generated.h"

UCLASS()
class TESTUNREALENGINE_API ATestWeapon : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ATestWeapon();

private:
	UFUNCTION()
		void OnCharacterOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherACtor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void PostInitializeComponents()override;



	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* Weapon;

	UPROPERTY(VisibleAnywhere)
		class UBoxComponent* Trigger;

};
