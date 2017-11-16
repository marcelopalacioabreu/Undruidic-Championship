// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Weapon.generated.h"

USTRUCT()
struct FWeaponData
{
	GENERATED_USTRUCT_BODY()
		UPROPERTY(EditdefaultsOnly)
		int32 damage;
};

UCLASS()
class UC_API AWeapon : public AActor
{
	GENERATED_BODY()

	AWeapon();

	void Fire();

	UPROPERTY(EditDefaultsOnly)
		FWeaponData weaponData;

	UPROPERTY(VisibleAnywhere)
		UBoxComponent* CollisionComp;

	UPROPERTY(VisibleAnywhere)
		USkeletalMeshComponent* WeaponMesh;
};



