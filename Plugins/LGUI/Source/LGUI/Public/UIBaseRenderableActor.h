#pragma once
#include "CoreMinimal.h"
#include "UIBaseActor.h"
#include "UIBaseRenderableActor.generated.h"

class UUIBaseRenderable;

UCLASS(Abstract)
class LGUI_API AUIBaseRenderableActor : public AUIBaseActor {
    GENERATED_BODY()
public:
    AUIBaseRenderableActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintNativeEvent)
    UUIBaseRenderable* GetUIRenderable_Impl() const;
    
    UFUNCTION(BlueprintPure)
    UUIBaseRenderable* GetUIRenderable_BP() const;
    
    UFUNCTION(BlueprintPure)
    UUIBaseRenderable* GetUIRenderable() const;
    
};

