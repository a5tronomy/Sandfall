#pragma once
#include "CoreMinimal.h"
#include "UIGeometryModifierBase.h"
#include "UIEffectTextAnimation.generated.h"

class UUIEffectTextAnimation_Property;
class UUIEffectTextAnimation_Selector;
class UUIText;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUIEffectTextAnimation : public UUIGeometryModifierBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Instanced)
    UUIEffectTextAnimation_Selector* selector;
    
    UPROPERTY(EditAnywhere, Instanced)
    TArray<UUIEffectTextAnimation_Property*> Properties;
    
    UPROPERTY(EditAnywhere)
    float selectorOffset;
    
    UPROPERTY(Instanced, Transient)
    UUIText* UIText;
    
public:
    UUIEffectTextAnimation(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSelectorOffset(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetSelector(UUIEffectTextAnimation_Selector* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetProperty(int32 Index, UUIEffectTextAnimation_Property* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetProperties(const TArray<UUIEffectTextAnimation_Property*>& Value);
    
    UFUNCTION(BlueprintPure)
    float GetSelectorOffset() const;
    
    UFUNCTION(BlueprintPure)
    UUIEffectTextAnimation_Selector* GetSelector() const;
    
    UFUNCTION(BlueprintPure)
    UUIEffectTextAnimation_Property* GetProperty(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UUIEffectTextAnimation_Property*> GetProperties() const;
    
};

