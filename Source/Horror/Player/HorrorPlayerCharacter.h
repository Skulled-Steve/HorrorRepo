#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "HorrorPlayerCharacter.generated.h"

UCLASS()
class AHorrorPlayerCharacter : public ACharacter
{
    GENERATED_BODY()

public:
    AHorrorPlayerCharacter();

    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    /** Returns true if player is currently hiding */
    bool IsHiddenFromMonster() const { return bIsHidden; }

    /** Start hiding in a hiding spot */
    void StartHide();

    /** Stop hiding */
    void StopHide();

    /** Toggle hiding when the hide action is triggered */
    void ToggleHide();

protected:
    /** First person camera */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    class UCameraComponent* CameraComp;

    /** Whether the player is hiding */
    bool bIsHidden;

    void MoveForward(float Value);
    void MoveRight(float Value);
    void Turn(float Value);
    void LookUp(float Value);
};
