#pragma once
#include "CoreMinimal.h"
#include "UIPanelLayoutBase.h"
#include "UIPanelLayout_FlexibleGridSize.h"
#include "UIPanelLayout_FlexibleGrid.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUIPanelLayout_FlexibleGrid : public UUIPanelLayoutBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<FUIPanelLayout_FlexibleGridSize> Columns;
    
    UPROPERTY(EditAnywhere)
    TArray<FUIPanelLayout_FlexibleGridSize> Rows;
    
public:
    UUIPanelLayout_FlexibleGrid(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRows(const TArray<FUIPanelLayout_FlexibleGridSize>& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetColumns(const TArray<FUIPanelLayout_FlexibleGridSize>& Value);
    
    UFUNCTION(BlueprintPure)
    TArray<FUIPanelLayout_FlexibleGridSize> GetRows() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FUIPanelLayout_FlexibleGridSize> GetColumns() const;
    
};

