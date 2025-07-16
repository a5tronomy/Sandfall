#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "LGUIRenderTargetInteractionSourceInterface.generated.h"

class ULGUICanvas;

UINTERFACE(Blueprintable, MinimalAPI)
class ULGUIRenderTargetInteractionSourceInterface : public UInterface {
    GENERATED_BODY()
};

class ILGUIRenderTargetInteractionSourceInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool PerformLineTrace(const int32& InHitFaceIndex, const FVector& InHitPoint, const FVector& InLineStart, const FVector& InLineEnd, FVector2D& OutHitUV);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ULGUICanvas* GetTargetCanvas() const;
    
};

