#include "Game/HorrorGameMode.h"
#include "Player/HorrorPlayerCharacter.h"
#include "HUD/MenuHUD.h"
#include "UObject/ConstructorHelpers.h"

AHorrorGameMode::AHorrorGameMode()
{
    static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Script/Horror.HorrorPlayerCharacter"));
    DefaultPawnClass = PlayerPawnClassFinder.Class;
    HUDClass = AMenuHUD::StaticClass();
}
