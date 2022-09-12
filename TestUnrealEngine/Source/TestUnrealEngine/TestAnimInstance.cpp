// Fill out your copyright notice in the Description page of Project Settings.


#include "TestAnimInstance.h"
#include "GameFramework/Character.h"
#include "GameFramework/PawnMovementComponent.h"
UTestAnimInstance::UTestAnimInstance()
{
	static ConstructorHelpers::FObjectFinder<UAnimMontage>AM(TEXT("AnimMontage'/Game/Animations/TestAnimMontage.TestAnimMontage'"));
	if (AM.Succeeded())
	{
		AnimMontage = AM.Object;
	}
}
void UTestAnimInstance::PlayMontage()
{
	
	Montage_Play(AnimMontage, 1.f);

}
void UTestAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	auto Pawn = TryGetPawnOwner();
	if (IsValid(Pawn))
	{
		
		auto Character = Cast<ACharacter>(Pawn);
		if (Character)
		{
			Speed = Character->GetVelocity().Size();
			IsFalling = Character->GetMovementComponent()->IsFalling();
		}
	}
}

void UTestAnimInstance::AnimNotify_AttackHit()
{
	UE_LOG(LogTemp, Log, TEXT("AnimNotify_AttackHit"));
}

FName UTestAnimInstance::GetAttackMontageName(int32 SectionIndex)
{
	return FName(*FString::Printf(TEXT("Attack%d"), SectionIndex));
}

void UTestAnimInstance::JumpToSection(int32 SectionIndex)
{
	FName name = GetAttackMontageName(SectionIndex);
	Montage_JumpToSection(name, AnimMontage);
	UE_LOG(LogTemp, Log, TEXT("AnimNotify%d"), SectionIndex);
}
