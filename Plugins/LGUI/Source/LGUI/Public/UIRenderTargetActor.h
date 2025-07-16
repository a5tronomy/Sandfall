#pragma once
#include "CoreMinimal.h"
#include "UIBaseRenderableActor.h"
#include "UIRenderTargetActor.generated.h"

class UUIRenderTarget;

UCLASS()
class LGUI_API AUIRenderTargetActor : public AUIBaseRenderableActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, Transient, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UUIRenderTarget* UIRenderTarget;
    
public:
    AUIRenderTargetActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    UUIRenderTarget* Get2DLineRing() const;
    
};

