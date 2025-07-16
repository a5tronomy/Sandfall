#pragma once
#include "CoreMinimal.h"
#include "UIPanelLayoutSlotBase.h"
#include "UIPanelLayoutSlotWithOverrideOrder.generated.h"

UCLASS(Abstract)
class LGUI_API UUIPanelLayoutSlotWithOverrideOrder : public UUIPanelLayoutSlotBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    int32 OverrideLayoutOrder;
    
public:
    UUIPanelLayoutSlotWithOverrideOrder();

    UFUNCTION(BlueprintCallable)
    void SetOverrideLayoutOrder(int32 Value);
    
    UFUNCTION(BlueprintPure)
    int32 GetOverrideLayoutOrder() const;
    
};

