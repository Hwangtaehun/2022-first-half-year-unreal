// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor_Debug.generated.h"

UCLASS()
class TEST1_API AMyActor_Debug : public AActor
{
	GENERATED_BODY()

private:
	int a = 10;
	int b = 20;
	int result;
	
public:	
	// Sets default values for this actor's properties
	AMyActor_Debug();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	int add();

};
