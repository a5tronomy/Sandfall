#pragma once
#include "CoreMinimal.h"
#include "UILayoutWithChildren.h"
#include "UIPanelLayoutBase.generated.h"

class UUIItem;
class UUIPanelLayoutSlotBase;

UCLASS(Abstract, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUIPanelLayoutBase : public UUILayoutWithChildren {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, Instanced, VisibleAnywhere)
    TMap<UUIItem*, UUIPanelLayoutSlotBase*> MapChildToSlot;
    
public:
    UUIPanelLayoutBase(const FObjectInitializer& ObjectInitializer);

};

