// Fill out your copyright notice in the Description page of Project Settings.


#include "TestWeapon.h"
#include "Components/BoxComponent.h"
#include "TestCharacter.h"

// Sets default values
ATestWeapon::ATestWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	FName WeaponSocket(TEXT("hand_l_socket"));
	Weapon = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WEAPON"));
	Trigger = CreateDefaultSubobject<UBoxComponent>(TEXT("TRIGGER"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh>SW(TEXT("StaticMesh'/Game/ParagonGreystone/FX/Meshes/Heroes/Greystone/SM_Greystone_Blade_01.SM_Greystone_Blade_01'"));
	Weapon->SetupAttachment(RootComponent);
	Trigger->SetupAttachment(Weapon);
	if (SW.Succeeded())
	{
		Weapon->SetStaticMesh(SW.Object);
	}
	Weapon->SetCollisionProfileName(TEXT("TestCollisible"));
	Weapon->SetCollisionProfileName(TEXT("TestCollisible"));
	Trigger->SetBoxExtent(FVector(30.f, 30.f, 30.f));
}

void ATestWeapon::OnCharacterOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherACtor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Log, TEXT("Overlap"));
	ATestCharacter* MyCharacter = Cast<ATestCharacter>(OtherACtor);
	if (MyCharacter)
	{
		FName MyWeapon = TEXT("hand_l_Socket");
		if (MyCharacter->GetMesh()->DoesSocketExist(MyWeapon))
		{
			AttachToComponent(MyCharacter->GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, MyWeapon);
		}
	}
}

// Called when the game starts or when spawned
void ATestWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

void ATestWeapon::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	Trigger->OnComponentBeginOverlap.AddDynamic(this, &ATestWeapon::OnCharacterOverlap);

}
