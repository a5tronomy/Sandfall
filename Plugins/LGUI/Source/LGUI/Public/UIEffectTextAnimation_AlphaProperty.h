#pragma once
#include "CoreMinimal.h"
#include "UIEffectTextAnimation_PropertyWithEase.h"
#include "UIEffectTextAnimation_AlphaProperty.generated.h"

UCLASS(EditInlineNew)
class LGUI_API UUIEffectTextAnimation_AlphaProperty : public UUIEffectTextAnimation_PropertyWithEase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float Alpha;
    
public:
    UUIEffectTextAnimation_AlphaProperty();

    UFUNCTION(BlueprintCallable)
    void SetAlpha(float Value);
    
    UFUNCTION(BlueprintPure)
    float GetAlpha() const;
    
};

