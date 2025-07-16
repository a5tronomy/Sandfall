#pragma once
#include "CoreMinimal.h"
#include "LevelInstance/LevelInstanceTypes.h"
#include "HoudiniLevelInstanceParams.generated.h"

USTRUCT(BlueprintType)
struct HOUDINIENGINERUNTIME_API FHoudiniLevelInstanceParams {
    GENERATED_BODY()
public:
    UPROPERTY()
    ELevelInstanceCreationType Type;
    
    UPROPERTY()
    FString OutputName;
    
    FHoudiniLevelInstanceParams();
};

