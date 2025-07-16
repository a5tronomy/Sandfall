#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "LGUICanvasScalerCustomScale.generated.h"

class ULGUICanvasScaler;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class LGUI_API ULGUICanvasScalerCustomScale : public UObject {
    GENERATED_BODY()
public:
    ULGUICanvasScalerCustomScale();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveInit(ULGUICanvasScaler* InCanvasScaler);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveCalculateSizeAndScale(ULGUICanvasScaler* InCanvasScaler, const FIntPoint& InViewportSize, FIntPoint& OutLGUICanvasSize, float& OutScale);
    
};

