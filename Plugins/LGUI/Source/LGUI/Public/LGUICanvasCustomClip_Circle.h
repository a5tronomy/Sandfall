#pragma once
#include "CoreMinimal.h"
#include "LGUICanvasCustomClip.h"
#include "LGUICanvasCustomClip_Circle.generated.h"

UCLASS(EditInlineNew)
class LGUI_API ULGUICanvasCustomClip_Circle : public ULGUICanvasCustomClip {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float sizeMultiply;
    
public:
    ULGUICanvasCustomClip_Circle();

    UFUNCTION(BlueprintCallable)
    void SetSizeMultiply(float Value);
    
    UFUNCTION(BlueprintPure)
    float GetSizeMultiply() const;
    
};

