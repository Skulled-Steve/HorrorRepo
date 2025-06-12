#include "Horror/Game/HorrorGameMode.h"
#include "Horror/Player/HorrorPlayerCharacter.h"
#include "Horror/HUD/MenuHUD.h"
#include "UObject/ConstructorHelpers.h"

AHorrorGameMode::AHorrorGameMode()
{
    static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Script/Horror.HorrorPlayerCharacter"));
    DefaultPawnClass = PlayerPawnClassFinder.Class;
    HUDClass = AMenuHUD::StaticClass();
}
