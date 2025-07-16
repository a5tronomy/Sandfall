#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UIEffectTextAnimation_PropertyWithEase.h"
#include "UIEffectTextAnimation_RotationProperty.generated.h"

UCLASS(EditInlineNew)
class LGUI_API UUIEffectTextAnimation_RotationProperty : public UUIEffectTextAnimation_PropertyWithEase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FRotator Rotator;
    
public:
    UUIEffectTextAnimation_RotationProperty();

    UFUNCTION(BlueprintCallable)
    void SetRotator(FRotator Value);
    
    UFUNCTION(BlueprintPure)
    FRotator GetRotator() const;
    
};

