// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor_Debug.h"

// Sets default values
AMyActor_Debug::AMyActor_Debug()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActor_Debug::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActor_Debug::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UE_LOG(LogTemp, Log, TEXT("Hello world"));

	/*result = add();
	UE_LOG(LogTemp, Log, TEXT("Result = %d", result));*/
	/*GEngine->AddOnScreenDebugMessage(-1. 5.0f, FColor:white, TEXT("HI"));*/
}

//int AMyActor_Debug::add()
//{
//	return (a + b);
//
//}
