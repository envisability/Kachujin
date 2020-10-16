// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "KachujinCharacter.generated.h"

UCLASS(config=Game, Blueprintable)
class AKachujinCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Side view camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* SideViewCameraComponent;

	/** Camera boom positioning the camera beside the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

public:

	/** The health of the player */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vitals")
	float Health;

	/** Holds the maximum health value for the player*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vitals")
	float MaxHealth;

	/** The stamina of the player*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vitals")
	float Stamina;

	/** The maximum stamin of the player*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vitals")
	float MaxStamina;

protected:

	/** Called for side to side input */
	void MoveRight(float Val);

	/** Handle touch inputs. */
	void TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location);

	/** Handle touch stop event. */
	void TouchStopped(const ETouchIndex::Type FingerIndex, const FVector Location);

	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	// End of APawn interface


public:
	AKachujinCharacter();

	/** Returns SideViewCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetSideViewCameraComponent() const { return SideViewCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
};
