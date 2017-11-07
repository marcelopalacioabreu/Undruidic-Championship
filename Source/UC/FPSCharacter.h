// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "FPSCharacter.generated.h"

UCLASS()
class UC_API AFPSCharacter : public ACharacter
{
	GENERATED_BODY()

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	class USkeletalMeshComponent* FPSMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FirstPersonCameraComponent;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerProperties)
		float MaxHitPoints = 100;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerProperties)
	float HitPoints = MaxHitPoints;
	


public: virtual void Tick(float DeltaTime) override;
public:
	// Sets default values for this character's properties
	AFPSCharacter();

public:

	/** Handles moving forward/backward */
	void MoveForward(float Val);

	/** Handles stafing movement, left and right */
	void MoveRight(float Val);

protected:

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	/** Returns Mesh1P subobject **/
	FORCEINLINE class USkeletalMeshComponent* GetMesh1P() const { return FPSMesh; }
	/** Returns FirstPersonCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }




	



};
