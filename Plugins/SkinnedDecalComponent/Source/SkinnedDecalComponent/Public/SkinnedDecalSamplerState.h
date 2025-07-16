#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SkinnedDecalData.h"
#include "SkinnedDecalSamplerState.generated.h"

USTRUCT(BlueprintType)
struct FSkinnedDecalSamplerState {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    TMap<int32, FSkinnedDecalData> Decals;
    
    UPROPERTY(SaveGame)
    TArray<FVector> DecalLocations;
    
    UPROPERTY(SaveGame)
    TArray<int32> EmptyIndexes;
    
    UPROPERTY(SaveGame)
    int32 LastDecalIndex;
    
    SKINNEDDECALCOMPONENT_API FSkinnedDecalSamplerState();
};

