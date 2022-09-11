// Fill out your copyright notice in the Description page of Project Settings.


#include "TestGameModeBase.h"
#include "TestCharacter.h"

ATestGameModeBase::ATestGameModeBase()
{
	DefaultPawnClass = ATestCharacter::StaticClass();

	static ConstructorHelpers::FClassFinder<ACharacter>TestPawn(TEXT("Blueprint'/Game/Blueprints/tEST/BP_TESTCharacter.BP_TESTCharacter_C'"));
	if (TestPawn.Succeeded())
	{
		DefaultPawnClass = TestPawn.Class;
	}
}