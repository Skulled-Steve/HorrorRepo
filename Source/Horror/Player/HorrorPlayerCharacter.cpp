#include "Player/HorrorPlayerCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"

AHorrorPlayerCharacter::AHorrorPlayerCharacter()
{
    PrimaryActorTick.bCanEverTick = false;

    CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
    CameraComp->SetupAttachment(GetCapsuleComponent());
    CameraComp->bUsePawnControlRotation = true;

    bIsHidden = false;
}

void AHorrorPlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    check(PlayerInputComponent);

    PlayerInputComponent->BindAxis("MoveForward", this, &AHorrorPlayerCharacter::MoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &AHorrorPlayerCharacter::MoveRight);
    PlayerInputComponent->BindAxis("Turn", this, &AHorrorPlayerCharacter::Turn);
    PlayerInputComponent->BindAxis("LookUp", this, &AHorrorPlayerCharacter::LookUp);
    PlayerInputComponent->BindAction("Hide", IE_Pressed, this, &AHorrorPlayerCharacter::ToggleHide);
}

void AHorrorPlayerCharacter::MoveForward(float Value)
{
    if (Value != 0.f)
    {
        AddMovementInput(GetActorForwardVector(), Value);
    }
}

void AHorrorPlayerCharacter::MoveRight(float Value)
{
    if (Value != 0.f)
    {
        AddMovementInput(GetActorRightVector(), Value);
    }
}

void AHorrorPlayerCharacter::Turn(float Value)
{
    AddControllerYawInput(Value);
}

void AHorrorPlayerCharacter::LookUp(float Value)
{
    AddControllerPitchInput(Value);
}

void AHorrorPlayerCharacter::StartHide()
{
    bIsHidden = true;
    SetActorHiddenInGame(true);
}

void AHorrorPlayerCharacter::StopHide()
{
    bIsHidden = false;
    SetActorHiddenInGame(false);
}

void AHorrorPlayerCharacter::ToggleHide()
{
    if (bIsHidden)
    {
        StopHide();
    }
    else
    {
        StartHide();
    }
}
