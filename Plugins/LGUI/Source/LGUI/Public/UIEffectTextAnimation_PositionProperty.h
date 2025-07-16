#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UIEffectTextAnimation_PropertyWithEase.h"
#include "UIEffectTextAnimation_PositionProperty.generated.h"

UCLASS(EditInlineNew)
class LGUI_API UUIEffectTextAnimation_PositionProperty : public UUIEffectTextAnimation_PropertyWithEase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FVector position;
    
public:
    UUIEffectTextAnimation_PositionProperty();

    UFUNCTION(BlueprintCallable)
    void SetPosition(FVector Value);
    
    UFUNCTION(BlueprintPure)
    FVector GetPosition() const;
    
};

