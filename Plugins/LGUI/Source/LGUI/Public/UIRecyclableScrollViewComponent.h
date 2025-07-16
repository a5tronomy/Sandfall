#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Layout/Margin.h"
#include "EUIRecyclableScrollViewCellTemplateType.h"
#include "UIRecyclableScrollViewCellContainer.h"
#include "UIScrollViewWithScrollbarComponent.h"
#include "UIRecyclableScrollViewComponent.generated.h"

class AUIBaseActor;
class IUIRecyclableScrollViewDataSource;
class UUIRecyclableScrollViewDataSource;
class ULGUIPrefab;
class UObject;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUIRecyclableScrollViewComponent : public UUIScrollViewWithScrollbarComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UObject* DataSource;
    
    UPROPERTY(EditAnywhere)
    EUIRecyclableScrollViewCellTemplateType CellTemplateType;
    
    UPROPERTY(EditAnywhere)
    AUIBaseActor* CellTemplate;
    
    UPROPERTY(EditAnywhere)
    ULGUIPrefab* CellTemplatePrefab;
    
    UPROPERTY(EditAnywhere)
    uint16 Rows;
    
    UPROPERTY(EditAnywhere)
    uint16 Columns;
    
    UPROPERTY(EditAnywhere)
    bool bInfiniteLoop;
    
    UPROPERTY(EditAnywhere)
    FMargin Padding;
    
    UPROPERTY(EditAnywhere)
    FVector2D Space;
    
private:
    UPROPERTY(AdvancedDisplay, Transient, VisibleAnywhere)
    TArray<FUIRecyclableScrollViewCellContainer> CacheCellList;
    
public:
    UUIRecyclableScrollViewComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateWithDataSource();
    
    UFUNCTION(BlueprintCallable)
    void UpdateCellData();
    
    UFUNCTION(BlueprintCallable)
    void SetSpace(const FVector2D& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetRows(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetPadding(const FMargin& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetInfiniteLoop(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetDataSource(TScriptInterface<IUIRecyclableScrollViewDataSource> InDataSource);
    
    UFUNCTION(BlueprintCallable)
    void SetColumns(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCellTemplatePrefab(ULGUIPrefab* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCellTemplate(AUIBaseActor* Value);
    
    UFUNCTION(BlueprintCallable)
    void ScrollToByDataIndex(int32 InDataIndex, bool InEaseAnimation, float InAnimationDuration);
    
    UFUNCTION(BlueprintCallable)
    void RecreateList();
    
    UFUNCTION(BlueprintPure)
    void GetUserFriendlyCacheCellList(TArray<FUIRecyclableScrollViewCellContainer>& OutResult) const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetSpace() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetRows() const;
    
    UFUNCTION(BlueprintPure)
    FMargin GetPadding() const;
    
    UFUNCTION(BlueprintPure)
    bool GetInfiniteLoop() const;
    
    UFUNCTION(BlueprintPure)
    TScriptInterface<IUIRecyclableScrollViewDataSource> GetDataSource() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetColumns() const;
    
    UFUNCTION(BlueprintPure)
    EUIRecyclableScrollViewCellTemplateType GetCellTemplateType() const;
    
    UFUNCTION(BlueprintPure)
    ULGUIPrefab* GetCellTemplatePrefab() const;
    
    UFUNCTION(BlueprintPure)
    AUIBaseActor* GetCellTemplate() const;
    
    UFUNCTION(BlueprintPure)
    bool GetCellItemByDataIndex(int32 Index, FUIRecyclableScrollViewCellContainer& OutResult) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FUIRecyclableScrollViewCellContainer> GetCacheCellList() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearAllCells();
    
};

