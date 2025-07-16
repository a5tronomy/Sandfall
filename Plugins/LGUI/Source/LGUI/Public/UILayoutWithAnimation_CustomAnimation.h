#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UILayoutWithAnimation_CustomAnimation.generated.h"

class UUIItem;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class LGUI_API UUILayoutWithAnimation_CustomAnimation : public UObject {
    GENERATED_BODY()
public:
    UUILayoutWithAnimation_CustomAnimation();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveEndSetupAnimations();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveBeginSetupAnimations();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveApplyWidthAnimation(float Value, UUIItem* Target);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveApplySizeDeltaAnimation(const FVector2D& Value, UUIItem* Target);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveApplyRotatorAnimation(const FRotator& Value, UUIItem* Target);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveApplyHeightAnimation(float Value, UUIItem* Target);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveApplyAnchoredPositionAnimation(const FVector2D& Value, UUIItem* Target);
    
};

