// Fill out your copyright notice in the Description page of Project Settings.


#include "TestCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "TestAnimInstance.h"
#include "DrawDebugHelpers.h"
#include "TestWeapon.h"

// Sets default values
ATestCharacter::ATestCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> SM (TEXT("SkeletalMesh'/Game/ParagonGreystone/Characters/Heroes/Greystone/Meshes/Greystone.Greystone'"));
	if (SM.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(SM.Object);
	}

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SPRINGARM"));
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));
	SpringArm->SetupAttachment(GetCapsuleComponent());
	Camera->SetupAttachment(SpringArm);
	
	SpringArm->TargetArmLength = 500.f;
	SpringArm->SetRelativeRotation(FRotator(-35.f, 0.f, 0.f));

	GetMesh()->SetRelativeLocationAndRotation(FVector(0.f, 0.f, -88.f), FRotator(0.f, -90.f, 0.f));
	//FName WeaponSocket(TEXT("hand_l_Socket"));
	//if (GetMesh()->DoesSocketExist(WeaponSocket))
	//{
	//	Weapon = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Weapon"));
	//	static ConstructorHelpers::FObjectFinder<UStaticMesh>SW(TEXT("StaticMesh'/Game/ParagonGreystone/FX/Meshes/Heroes/Greystone/SM_Greystone_Blade_01.SM_Greystone_Blade_01'"));
	//	if (SW.Succeeded())
	//	{
	//		Weapon->SetStaticMesh(SW.Object);
	//	}
	//	Weapon->SetupAttachment(GetMesh(), WeaponSocket);
	//}
	//


}

// Called when the game starts or when spawned
void ATestCharacter::BeginPlay()
{
	Super::BeginPlay();

	FName WeaponSocket(TEXT("hand_l_socket"));

	auto CurrentWeapon = GetWorld()->SpawnActor<ATestWeapon>(FVector::ZeroVector, FRotator::ZeroRotator);
	//if (CurrentWeapon)
	//{
	//	CurrentWeapon->AttachToComponent(GetMesh(),FAttachmentTransformRules::SnapToTargetNotIncludingScale ,WeaponSocket);
	//}
	//
	
}

// Called every frame
void ATestCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATestCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this, &ATestCharacter::Jump);
	PlayerInputComponent->BindAction(TEXT("Attack"), EInputEvent::IE_Pressed, this, &ATestCharacter::Attack);

	PlayerInputComponent->BindAxis(TEXT("UpDown"), this, &ATestCharacter::UpDown);
	PlayerInputComponent->BindAxis(TEXT("LeftRight"), this, &ATestCharacter::LeftRight);
	PlayerInputComponent->BindAxis(TEXT("Yaw"), this, &ATestCharacter::Yaw);

}

void ATestCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	AnimInstance = Cast<UTestAnimInstance>(GetMesh()->GetAnimInstance());
	if (AnimInstance)
	{
		AnimInstance->OnMontageEnded.AddDynamic(this, &ATestCharacter::OnAttackMontageEnded);
		AnimInstance->OnAttackHit.AddUObject(this, &ATestCharacter::AttackCheck);
	}
}

void ATestCharacter::UpDown(float Value)
{
	if (Value == 0.f)
	{
		return;
	}
	UpDownValue = Value;
	AddMovementInput(GetActorForwardVector(), Value);
}

void ATestCharacter::LeftRight(float Value)
{
	if (Value == 0.f)
	{
		return;
	}
	LeftRightValue = Value;
	AddMovementInput(GetActorRightVector(), Value);
}

void ATestCharacter::Yaw(float Value)
{
	if (Value == 0.f)
	{
		return;
	}
	AddControllerYawInput(Value);
}

void ATestCharacter::Attack()
{
	if (IsAttacking)
	{
		return;
	}
	AnimInstance->PlayMontage();
	AttackIndex = (AttackIndex + 1) % 3;
	AnimInstance->JumpToSection(AttackIndex);
	
	IsAttacking = true;
	
}

void ATestCharacter::AttackCheck()
{
	FHitResult HitResult;
	FCollisionQueryParams Params(NAME_None, false, this);

	float AttackRange = 100.f;
	float AttackRadius = 50.f;

	bool bResult = GetWorld()->SweepSingleByChannel(
		OUT HitResult,
		GetActorLocation(),
		GetActorLocation() + GetActorForwardVector() * AttackRange,
		FQuat::Identity,
		ECollisionChannel::ECC_GameTraceChannel4,
		FCollisionShape::MakeSphere(AttackRadius),
		Params

	);

	FVector Vec = GetActorForwardVector() * AttackRange;
	FVector Center = GetActorLocation() + Vec * 0.5f;

	float HalfHeight = AttackRange * 0.5f + AttackRadius;

	FQuat Rotation = FRotationMatrix::MakeFromZ(Vec).ToQuat();
	FColor DrawColor;
	if (bResult)
	{
		DrawColor = FColor::Green;
	}
	else
	{
		DrawColor = FColor::Red;
	}

	DrawDebugCapsule(GetWorld(), Center, HalfHeight, AttackRadius, Rotation, DrawColor, false, 2.f);
	if (bResult && HitResult.Actor.IsValid())
	{
		UE_LOG(LogTemp, Log, TEXT("Hit Actor : %s"), *HitResult.Actor->GetName());
	}


}

void ATestCharacter::OnAttackMontageEnded(UAnimMontage* AnimMontage, bool bInterrupted)
{
	IsAttacking = false;
}


