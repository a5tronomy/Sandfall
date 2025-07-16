#pragma once
#include "CoreMinimal.h"
#include "ELTweenEase.h"
#include "UIEffectTextAnimation_Property.h"
#include "UIEffectTextAnimation_PropertyWithEase.generated.h"

class UCurveFloat;

UCLASS(Abstract, BlueprintType, EditInlineNew)
class LGUI_API UUIEffectTextAnimation_PropertyWithEase : public UUIEffectTextAnimation_Property {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    ELTweenEase easetype;
    
    UPROPERTY(EditAnywhere)
    UCurveFloat* easeCurve;
    
public:
    UUIEffectTextAnimation_PropertyWithEase();

    UFUNCTION(BlueprintCallable)
    void SetEaseType(ELTweenEase Value);
    
    UFUNCTION(BlueprintCallable)
    void SetEaseCurve(UCurveFloat* Value);
    
    UFUNCTION(BlueprintPure)
    ELTweenEase GetEaseType() const;
    
    UFUNCTION(BlueprintPure)
    UCurveFloat* GetCurveFloat() const;
    
};

