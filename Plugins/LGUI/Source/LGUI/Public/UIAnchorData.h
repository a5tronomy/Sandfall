#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UIAnchorData.generated.h"

USTRUCT(BlueprintType)
struct LGUI_API FUIAnchorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D Pivot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D AnchorMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D AnchorMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D AnchoredPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D SizeDelta;
    
    FUIAnchorData();
};

