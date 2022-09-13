// Fill out your copyright notice in the Description page of Project Settings.


#include "TestWeapon.h"

// Sets default values
ATestWeapon::ATestWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	FName WeaponSocket(TEXT("hand_l_socket"));
	Weapon = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WEAPON"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh>SW(TEXT("StaticMesh'/Game/ParagonGreystone/FX/Meshes/Heroes/Greystone/SM_Greystone_Blade_01.SM_Greystone_Blade_01'"));
	if (SW.Succeeded())
	{
		Weapon->SetStaticMesh(SW.Object);
	}
	Weapon->SetCollisionProfileName(TEXT("Collision"));

}

// Called when the game starts or when spawned
void ATestWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

