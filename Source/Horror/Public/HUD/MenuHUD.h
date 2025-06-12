#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MenuHUD.generated.h"

class UMenuWidget;

UCLASS()
class AMenuHUD : public AHUD
{
    GENERATED_BODY()

public:
    virtual void BeginPlay() override;

protected:
    UPROPERTY(EditDefaultsOnly, Category="UI")
    TSubclassOf<UMenuWidget> MenuClass;
};
