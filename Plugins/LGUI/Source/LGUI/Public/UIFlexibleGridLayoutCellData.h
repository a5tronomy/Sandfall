#pragma once
#include "CoreMinimal.h"
#include "EUIFlexibleGridLayoutCellSizeType.h"
#include "UIFlexibleGridLayoutCellData.generated.h"

USTRUCT(BlueprintType)
struct LGUI_API FUIFlexibleGridLayoutCellData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Size;
    
    UPROPERTY(EditAnywhere)
    EUIFlexibleGridLayoutCellSizeType SizeType;
    
    FUIFlexibleGridLayoutCellData();
};

