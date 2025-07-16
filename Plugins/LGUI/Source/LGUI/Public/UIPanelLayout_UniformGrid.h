#pragma once
#include "CoreMinimal.h"
#include "UIPanelLayoutBase.h"
#include "UIPanelLayout_UniformGrid.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUIPanelLayout_UniformGrid : public UUIPanelLayoutBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool bWidthFitToChildren;
    
    UPROPERTY(EditAnywhere)
    float WidthFitToChildrenFromMinToMax;
    
    UPROPERTY(EditAnywhere)
    bool bHeightFitToChildren;
    
    UPROPERTY(EditAnywhere)
    float HeightFitToChildrenFromMinToMax;
    
public:
    UUIPanelLayout_UniformGrid(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWidthFitToChildrenFromMinToMax(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetWidthFitToChildren(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHeightFitToChildrenFromMinToMax(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetHeightFitToChildren(bool Value);
    
    UFUNCTION(BlueprintPure)
    float GetWidthFitToChildrenFromMinToMax() const;
    
    UFUNCTION(BlueprintPure)
    bool GetWidthFitToChildren() const;
    
    UFUNCTION(BlueprintPure)
    float GetHeightFitToChildrenFromMinToMax() const;
    
    UFUNCTION(BlueprintPure)
    bool GetHeightFitToChildren() const;
    
};

