#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "DragonIKTraceKeyValuePair.generated.h"

USTRUCT(BlueprintType)
struct FDragonIKTraceKeyValuePair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Key;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName BoneName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FHitResult hit_result;
    
    DRAGONIKPLUGIN_API FDragonIKTraceKeyValuePair();
};

