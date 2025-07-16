#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UIEffectTextAnimation_PropertyWithWave.h"
#include "UIEffectTextAnimation_PositionWaveProperty.generated.h"

UCLASS(EditInlineNew)
class LGUI_API UUIEffectTextAnimation_PositionWaveProperty : public UUIEffectTextAnimation_PropertyWithWave {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FVector position;
    
public:
    UUIEffectTextAnimation_PositionWaveProperty();

    UFUNCTION(BlueprintCallable)
    void SetPosition(FVector Value);
    
    UFUNCTION(BlueprintPure)
    FVector GetPosition() const;
    
};

