#pragma once
#include "CoreMinimal.h"
#include "UIEffectTextAnimation_Selector.h"
#include "UIEffectTextAnimation_RangeSelector.generated.h"

UCLASS(EditInlineNew)
class LGUI_API UUIEffectTextAnimation_RangeSelector : public UUIEffectTextAnimation_Selector {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float Range;
    
    UPROPERTY(EditAnywhere)
    bool flipDirection;
    
    UPROPERTY(EditAnywhere)
    float Start;
    
    UPROPERTY(EditAnywhere)
    float End;
    
public:
    UUIEffectTextAnimation_RangeSelector();

    UFUNCTION(BlueprintCallable)
    void SetStart(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetRange(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFlipDirection(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetEnd(float Value);
    
    UFUNCTION(BlueprintPure)
    float GetStart() const;
    
    UFUNCTION(BlueprintPure)
    float GetRange() const;
    
    UFUNCTION(BlueprintPure)
    bool GetFlipDirection() const;
    
    UFUNCTION(BlueprintPure)
    float GetEnd() const;
    
};

