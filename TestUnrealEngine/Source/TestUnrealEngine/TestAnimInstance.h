// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "TestAnimInstance.generated.h"

/**
 *
 */
DECLARE_MULTICAST_DELEGATE(FOnAttackHit);
UCLASS()
class TESTUNREALENGINE_API UTestAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
public:
	UTestAnimInstance();

	void PlayMontage();

private:
	virtual void NativeUpdateAnimation(float DeltaSeconds)override;

private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		float Speed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		bool IsFalling;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		UAnimMontage* AnimMontage;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		float Horizontal;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Pawn, Meta = (AllowPrivateAccess = true))
		float Vertical;

private:
	UFUNCTION()
		void AnimNotify_AttackHit();

public:
	FName GetAttackMontageName(int32 SectionIndex);
	void JumpToSection(int32 SectionIndex);

public:
	FOnAttackHit OnAttackHit;



};
