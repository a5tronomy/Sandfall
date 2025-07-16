#pragma once
#include "CoreMinimal.h"
#include "LGUILifeCycleUIBehaviour.h"
#include "UIFlexibleGridLayoutElement.generated.h"

class UUIFlexibleGridLayout;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUIFlexibleGridLayoutElement : public ULGUILifeCycleUIBehaviour {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    int32 RowIndex;
    
    UPROPERTY(EditAnywhere)
    int32 RowCount;
    
    UPROPERTY(EditAnywhere)
    int32 ColumnIndex;
    
    UPROPERTY(EditAnywhere)
    int32 ColumnCount;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreLayout;
    
    UPROPERTY(Instanced, Transient)
    UUIFlexibleGridLayout* ParentLayout;
    
public:
    UUIFlexibleGridLayoutElement(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRowIndex(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetRowCount(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreLayout(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetColumnIndex(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetColumnCount(int32 Value);
    
    UFUNCTION(BlueprintPure)
    int32 GetRowIndex() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetRowCount() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIgnoreLayout() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetColumnIndex() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetColumnCount() const;
    
};

