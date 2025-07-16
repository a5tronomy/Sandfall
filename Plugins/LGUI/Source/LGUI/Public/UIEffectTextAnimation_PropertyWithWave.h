#pragma once
#include "CoreMinimal.h"
#include "UIEffectTextAnimation_Property.h"
#include "UIEffectTextAnimation_PropertyWithWave.generated.h"

class UUIText;

UCLASS(Abstract, BlueprintType, EditInlineNew)
class LGUI_API UUIEffectTextAnimation_PropertyWithWave : public UUIEffectTextAnimation_Property {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float Frequency;
    
    UPROPERTY(EditAnywhere)
    float Speed;
    
    UPROPERTY(EditAnywhere)
    bool flipDirection;
    
    UPROPERTY(Instanced, Transient)
    UUIText* UIText;
    
public:
    UUIEffectTextAnimation_PropertyWithWave();

    UFUNCTION(BlueprintCallable)
    void SetFrequency(float Value);
    
    UFUNCTION(BlueprintPure)
    float GetFrequency() const;
    
};

