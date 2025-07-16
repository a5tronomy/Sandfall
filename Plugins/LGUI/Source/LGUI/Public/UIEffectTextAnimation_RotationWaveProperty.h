#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UIEffectTextAnimation_PropertyWithWave.h"
#include "UIEffectTextAnimation_RotationWaveProperty.generated.h"

UCLASS(EditInlineNew)
class LGUI_API UUIEffectTextAnimation_RotationWaveProperty : public UUIEffectTextAnimation_PropertyWithWave {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FRotator Rotator;
    
public:
    UUIEffectTextAnimation_RotationWaveProperty();

    UFUNCTION(BlueprintCallable)
    void SetRotator(FRotator Value);
    
    UFUNCTION(BlueprintPure)
    FRotator GetRotator() const;
    
};

