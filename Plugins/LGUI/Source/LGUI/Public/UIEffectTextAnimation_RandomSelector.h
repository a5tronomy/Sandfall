#pragma once
#include "CoreMinimal.h"
#include "UIEffectTextAnimation_Selector.h"
#include "UIEffectTextAnimation_RandomSelector.generated.h"

UCLASS(EditInlineNew)
class LGUI_API UUIEffectTextAnimation_RandomSelector : public UUIEffectTextAnimation_Selector {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    int32 Seed;
    
    UPROPERTY(EditAnywhere)
    float Start;
    
    UPROPERTY(EditAnywhere)
    float End;
    
public:
    UUIEffectTextAnimation_RandomSelector();

    UFUNCTION(BlueprintCallable)
    void SetStart(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetSeed(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetEnd(float Value);
    
    UFUNCTION(BlueprintPure)
    float GetStart() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSeed() const;
    
    UFUNCTION(BlueprintPure)
    float GetEnd() const;
    
};

