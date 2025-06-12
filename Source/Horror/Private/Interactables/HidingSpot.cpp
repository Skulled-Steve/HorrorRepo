#include "Horror/Interactables/HidingSpot.h"
#include "Components/BoxComponent.h"

AHidingSpot::AHidingSpot()
{
    BoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
    RootComponent = BoxComp;
}
