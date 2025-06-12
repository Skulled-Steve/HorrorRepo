#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "HorrorMonsterCharacter.generated.h"

class UPawnSensingComponent;

UCLASS()
class AHorrorMonsterCharacter : public ACharacter
{
    GENERATED_BODY()

public:
    AHorrorMonsterCharacter();

protected:
    virtual void BeginPlay() override;

    UPROPERTY(VisibleAnywhere)
    UPawnSensingComponent* PawnSensingComp;

    UFUNCTION()
    void OnSeePawn(APawn* Pawn);
};
