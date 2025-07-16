#pragma once
#include "CoreMinimal.h"
#include "UIBaseRenderableActor.h"
#include "UIRingActor.generated.h"

class UUIRing;

UCLASS()
class LGUI_API AUIRingActor : public AUIBaseRenderableActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, Transient, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UUIRing* UIElement;
    
public:
    AUIRingActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    UUIRing* GetUIRing() const;
    
    UFUNCTION(BlueprintPure)
    UUIRing* Get2DLineRing() const;
    
};

