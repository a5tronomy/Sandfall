#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UIEffectTextAnimation_PropertyWithEase.h"
#include "UIEffectTextAnimation_ColorProperty.generated.h"

UCLASS(EditInlineNew)
class LGUI_API UUIEffectTextAnimation_ColorProperty : public UUIEffectTextAnimation_PropertyWithEase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FColor Color;
    
    UPROPERTY(EditAnywhere)
    bool useHSV;
    
public:
    UUIEffectTextAnimation_ColorProperty();

    UFUNCTION(BlueprintCallable)
    void SetUseHSV(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetColor(FColor Value);
    
    UFUNCTION(BlueprintPure)
    bool GetUseHSV() const;
    
    UFUNCTION(BlueprintPure)
    FColor GetColor() const;
    
};

