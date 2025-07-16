#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UIPanelLayoutSlotBase.generated.h"

UCLASS(Abstract, BlueprintType, DefaultToInstanced)
class LGUI_API UUIPanelLayoutSlotBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FVector2D DesiredSize;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoreLayout;
    
public:
    UUIPanelLayoutSlotBase();

    UFUNCTION(BlueprintCallable)
    void SetIgnoreLayout(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredSize(const FVector2D& Value);
    
    UFUNCTION(BlueprintPure)
    bool GetIgnoreLayout() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetDesiredSize() const;
    
};

