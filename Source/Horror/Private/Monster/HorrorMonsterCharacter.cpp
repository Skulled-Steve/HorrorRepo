#include "Horror/Monster/HorrorMonsterCharacter.h"
#include "Perception/PawnSensingComponent.h"
#include "Horror/Player/HorrorPlayerCharacter.h"
#include "Kismet/GameplayStatics.h"

AHorrorMonsterCharacter::AHorrorMonsterCharacter()
{
    PrimaryActorTick.bCanEverTick = false;

    PawnSensingComp = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensing"));
    PawnSensingComp->SightRadius = 1000.f;
    PawnSensingComp->SetPeripheralVisionAngle(60.f);
}

void AHorrorMonsterCharacter::BeginPlay()
{
    Super::BeginPlay();

    if (PawnSensingComp)
    {
        PawnSensingComp->OnSeePawn.AddDynamic(this, &AHorrorMonsterCharacter::OnSeePawn);
    }
}

void AHorrorMonsterCharacter::OnSeePawn(APawn* Pawn)
{
    AHorrorPlayerCharacter* Player = Cast<AHorrorPlayerCharacter>(Pawn);
    if (Player && !Player->IsHiddenFromMonster())
    {
        UGameplayStatics::PlaySoundAtLocation(this, nullptr, GetActorLocation());
        // TODO: Add chasing behavior here
    }
}
