#include "Horror/HUD/MenuHUD.h"
#include "Horror/UI/MenuWidget.h"
#include "Blueprint/UserWidget.h"

void AMenuHUD::BeginPlay()
{
    Super::BeginPlay();

    if (MenuClass)
    {
        UMenuWidget* Menu = CreateWidget<UMenuWidget>(GetWorld(), MenuClass);
        if (Menu)
        {
            Menu->AddToViewport();
        }
    }
}
