#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HidingSpot.generated.h"

UCLASS()
class AHidingSpot : public AActor
{
    GENERATED_BODY()

public:
    AHidingSpot();

    UPROPERTY(VisibleAnywhere)
    class UBoxComponent* BoxComp;
};
