#pragma once
#include "CoreMinimal.h"
#include "UIPanelLayoutWithOverrideOrder.h"
#include "UIPanelLayout_HorizontalBox.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUIPanelLayout_HorizontalBox : public UUIPanelLayoutWithOverrideOrder {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool bWidthFitToChildren;
    
    UPROPERTY(EditAnywhere)
    bool bHeightFitToChildren;
    
    UPROPERTY(EditAnywhere)
    float HeightFitToChildrenFromMinToMax;
    
public:
    UUIPanelLayout_HorizontalBox(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWidthFitToChildren(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHeightFitToChildrenFromMinToMax(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHeightFitToChildren(bool Value);
    
    UFUNCTION(BlueprintPure)
    bool GetWidthFitToChildren() const;
    
    UFUNCTION(BlueprintPure)
    float GetHeightFitToChildrenFromMinToMax() const;
    
    UFUNCTION(BlueprintPure)
    bool GetHeightFitToChildren() const;
    
};

