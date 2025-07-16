#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UIEffectTextAnimation_Selector.generated.h"

UCLASS(Abstract, BlueprintType, DefaultToInstanced, EditInlineNew)
class LGUI_API UUIEffectTextAnimation_Selector : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float Offset;
    
public:
    UUIEffectTextAnimation_Selector();

    UFUNCTION(BlueprintCallable)
    void SetOffset(float Value);
    
    UFUNCTION(BlueprintPure)
    float GetOffset() const;
    
};

