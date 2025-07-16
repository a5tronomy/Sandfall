#pragma once
#include "CoreMinimal.h"
#include "LGUICanLayoutControlAnchor.generated.h"

USTRUCT(BlueprintType)
struct FLGUICanLayoutControlAnchor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bCanControlHorizontalAnchor;
    
    UPROPERTY(EditAnywhere)
    bool bCanControlVerticalAnchor;
    
    UPROPERTY(EditAnywhere)
    bool bCanControlHorizontalAnchoredPosition;
    
    UPROPERTY(EditAnywhere)
    bool bCanControlVerticalAnchoredPosition;
    
    UPROPERTY(EditAnywhere)
    bool bCanControlHorizontalSizeDelta;
    
    UPROPERTY(EditAnywhere)
    bool bCanControlVerticalSizeDelta;
    
    LGUI_API FLGUICanLayoutControlAnchor();
};

