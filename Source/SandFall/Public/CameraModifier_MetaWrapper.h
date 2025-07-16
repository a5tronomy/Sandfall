#pragma once
#include "CoreMinimal.h"
#include "CameraModifier_MetaWrapper.generated.h"

class UCameraModifier_Meta;

USTRUCT(BlueprintType)
struct FCameraModifier_MetaWrapper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UCameraModifier_Meta* Modifier;
    
    SANDFALL_API FCameraModifier_MetaWrapper();
};

