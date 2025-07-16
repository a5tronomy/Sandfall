#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SkinnedDecalData.generated.h"

USTRUCT(BlueprintType)
struct FSkinnedDecalData {
    GENERATED_BODY()
public:
    UPROPERTY(SaveGame)
    int32 Index;
    
    UPROPERTY(SaveGame)
    FVector DecalLocation;
    
    UPROPERTY(SaveGame)
    FVector BasisX;
    
    UPROPERTY(SaveGame)
    FVector BasisY;
    
    UPROPERTY(SaveGame)
    FVector BasisZ;
    
    UPROPERTY(SaveGame)
    FVector Info;
    
    SKINNEDDECALCOMPONENT_API FSkinnedDecalData();
};

