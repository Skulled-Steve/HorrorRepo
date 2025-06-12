#include "Horror/Public/Game/HorrorGameMode.h"
#include "Horror/Public/Player/HorrorPlayerCharacter.h"
#include "Horror/Public/HUD/MenuHUD.h"
#include "UObject/ConstructorHelpers.h"

AHorrorGameMode::AHorrorGameMode()
{
    static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Script/Horror.HorrorPlayerCharacter"));
    DefaultPawnClass = PlayerPawnClassFinder.Class;
    HUDClass = AMenuHUD::StaticClass();
}
