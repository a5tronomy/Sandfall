#pragma once
#include "CoreMinimal.h"
#include "UIBaseRenderableActor.h"
#include "UIWidgetActor.generated.h"

class UUIWidget;

UCLASS()
class LGUI_API AUIWidgetActor : public AUIBaseRenderableActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, Transient, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UUIWidget* UIWidget;
    
public:
    AUIWidgetActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    UUIWidget* GetUIWidget() const;
    
};

