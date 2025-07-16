#include "UIRecyclableScrollViewComponent.h"

UUIRecyclableScrollViewComponent::UUIRecyclableScrollViewComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DataSource = NULL;
    this->CellTemplateType = EUIRecyclableScrollViewCellTemplateType::Actor;
    this->CellTemplate = NULL;
    this->CellTemplatePrefab = NULL;
    this->Rows = 1;
    this->Columns = 1;
    this->bInfiniteLoop = false;
}

void UUIRecyclableScrollViewComponent::UpdateWithDataSource() {
}

void UUIRecyclableScrollViewComponent::UpdateCellData() {
}

void UUIRecyclableScrollViewComponent::SetSpace(const FVector2D& Value) {
}

void UUIRecyclableScrollViewComponent::SetRows(int32 Value) {
}

void UUIRecyclableScrollViewComponent::SetPadding(const FMargin& Value) {
}

void UUIRecyclableScrollViewComponent::SetInfiniteLoop(bool Value) {
}

void UUIRecyclableScrollViewComponent::SetDataSource(TScriptInterface<IUIRecyclableScrollViewDataSource> InDataSource) {
}

void UUIRecyclableScrollViewComponent::SetColumns(int32 Value) {
}

void UUIRecyclableScrollViewComponent::SetCellTemplatePrefab(ULGUIPrefab* Value) {
}

void UUIRecyclableScrollViewComponent::SetCellTemplate(AUIBaseActor* Value) {
}

void UUIRecyclableScrollViewComponent::ScrollToByDataIndex(int32 InDataIndex, bool InEaseAnimation, float InAnimationDuration) {
}

void UUIRecyclableScrollViewComponent::RecreateList() {
}

void UUIRecyclableScrollViewComponent::GetUserFriendlyCacheCellList(TArray<FUIRecyclableScrollViewCellContainer>& OutResult) const {
}

FVector2D UUIRecyclableScrollViewComponent::GetSpace() const {
    return FVector2D{};
}

int32 UUIRecyclableScrollViewComponent::GetRows() const {
    return 0;
}

FMargin UUIRecyclableScrollViewComponent::GetPadding() const {
    return FMargin{};
}

bool UUIRecyclableScrollViewComponent::GetInfiniteLoop() const {
    return false;
}

TScriptInterface<IUIRecyclableScrollViewDataSource> UUIRecyclableScrollViewComponent::GetDataSource() const {
    return NULL;
}

int32 UUIRecyclableScrollViewComponent::GetColumns() const {
    return 0;
}

EUIRecyclableScrollViewCellTemplateType UUIRecyclableScrollViewComponent::GetCellTemplateType() const {
    return EUIRecyclableScrollViewCellTemplateType::Actor;
}

ULGUIPrefab* UUIRecyclableScrollViewComponent::GetCellTemplatePrefab() const {
    return NULL;
}

AUIBaseActor* UUIRecyclableScrollViewComponent::GetCellTemplate() const {
    return NULL;
}

bool UUIRecyclableScrollViewComponent::GetCellItemByDataIndex(int32 Index, FUIRecyclableScrollViewCellContainer& OutResult) const {
    return false;
}

TArray<FUIRecyclableScrollViewCellContainer> UUIRecyclableScrollViewComponent::GetCacheCellList() const {
    return TArray<FUIRecyclableScrollViewCellContainer>();
}

void UUIRecyclableScrollViewComponent::ClearAllCells() {
}


