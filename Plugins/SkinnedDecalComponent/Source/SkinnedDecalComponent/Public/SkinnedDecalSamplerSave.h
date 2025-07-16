#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SkinnedDecalSamplerState.h"
#include "SkinnedDecalSamplerSave.generated.h"

UCLASS()
class SKINNEDDECALCOMPONENT_API USkinnedDecalSamplerSave : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY()
    FSkinnedDecalSamplerState SamplerState;
    
    USkinnedDecalSamplerSave();

};

