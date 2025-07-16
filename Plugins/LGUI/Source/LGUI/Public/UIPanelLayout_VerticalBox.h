#pragma once
#include "CoreMinimal.h"
#include "UIPanelLayoutWithOverrideOrder.h"
#include "UIPanelLayout_VerticalBox.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUIPanelLayout_VerticalBox : public UUIPanelLayoutWithOverrideOrder {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool bWidthFitToChildren;
    
    UPROPERTY(EditAnywhere)
    float WidthFitToChildrenFromMinToMax;
    
    UPROPERTY(EditAnywhere)
    bool bHeightFitToChildren;
    
public:
    UUIPanelLayout_VerticalBox(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWidthFitToChildrenFromMinToMax(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetWidthFitToChildren(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHeightFitToChildren(bool Value);
    
    UFUNCTION(BlueprintPure)
    float GetWidthFitToChildrenFromMinToMax() const;
    
    UFUNCTION(BlueprintPure)
    bool GetWidthFitToChildren() const;
    
    UFUNCTION(BlueprintPure)
    bool GetHeightFitToChildren() const;
    
};

