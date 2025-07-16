#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UIEffectTextAnimation_PropertyWithEase.h"
#include "UIEffectTextAnimation_ScaleProperty.generated.h"

UCLASS(EditInlineNew)
class LGUI_API UUIEffectTextAnimation_ScaleProperty : public UUIEffectTextAnimation_PropertyWithEase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FVector Scale;
    
public:
    UUIEffectTextAnimation_ScaleProperty();

    UFUNCTION(BlueprintCallable)
    void SetScale(FVector Value);
    
    UFUNCTION(BlueprintPure)
    FVector GetScale() const;
    
};

