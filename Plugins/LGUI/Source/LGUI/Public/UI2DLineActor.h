#pragma once
#include "CoreMinimal.h"
#include "UIBaseRenderableActor.h"
#include "UI2DLineActor.generated.h"

class UUI2DLineRaw;

UCLASS()
class LGUI_API AUI2DLineActor : public AUIBaseRenderableActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, Transient, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UUI2DLineRaw* UIElement;
    
public:
    AUI2DLineActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    UUI2DLineRaw* Get2DLineRaw() const;
    
};

