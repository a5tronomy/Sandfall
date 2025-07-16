#pragma once
#include "CoreMinimal.h"
#include "EUIPanelLayout_FlexibleGridSizeRule.h"
#include "UIPanelLayout_FlexibleGridSize.generated.h"

USTRUCT(BlueprintType)
struct LGUI_API FUIPanelLayout_FlexibleGridSize {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Value;
    
    UPROPERTY(EditAnywhere)
    EUIPanelLayout_FlexibleGridSizeRule SizeType;
    
    FUIPanelLayout_FlexibleGridSize();
};

