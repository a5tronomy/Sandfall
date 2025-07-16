#pragma once
#include "CoreMinimal.h"
#include "LGUIMaterialArrayContainer.generated.h"

class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FLGUIMaterialArrayContainer {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<UMaterialInstanceDynamic*> MaterialList;
    
    LGUI_API FLGUIMaterialArrayContainer();
};

