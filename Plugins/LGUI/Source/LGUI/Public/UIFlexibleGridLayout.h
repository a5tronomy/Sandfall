#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Layout/Margin.h"
#include "UIFlexibleGridLayoutCellData.h"
#include "UILayoutWithChildren.h"
#include "UIFlexibleGridLayout.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUIFlexibleGridLayout : public UUILayoutWithChildren {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FMargin Padding;
    
    UPROPERTY(EditAnywhere)
    FVector2D Spacing;
    
    UPROPERTY(EditAnywhere)
    TArray<FUIFlexibleGridLayoutCellData> Columns;
    
    UPROPERTY(EditAnywhere)
    TArray<FUIFlexibleGridLayoutCellData> Rows;
    
public:
    UUIFlexibleGridLayout(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSpacing(const FVector2D& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetRows(const TArray<FUIFlexibleGridLayoutCellData>& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetPadding(FMargin Value);
    
    UFUNCTION(BlueprintCallable)
    void SetColumns(const TArray<FUIFlexibleGridLayoutCellData>& Value);
    
    UFUNCTION(BlueprintPure)
    FVector2D GetSpacing() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FUIFlexibleGridLayoutCellData> GetRows() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetRowCount() const;
    
    UFUNCTION(BlueprintPure)
    FMargin GetPadding() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FUIFlexibleGridLayoutCellData> GetColumns() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetColumnCount() const;
    
};

