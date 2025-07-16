#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UIEffectTextAnimation_PropertyWithWave.h"
#include "UIEffectTextAnimation_ScaleWaveProperty.generated.h"

UCLASS(EditInlineNew)
class LGUI_API UUIEffectTextAnimation_ScaleWaveProperty : public UUIEffectTextAnimation_PropertyWithWave {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FVector Scale;
    
public:
    UUIEffectTextAnimation_ScaleWaveProperty();

    UFUNCTION(BlueprintCallable)
    void SetScale(FVector Value);
    
    UFUNCTION(BlueprintPure)
    FVector GetScale() const;
    
};

