#pragma once
#include "CoreMinimal.h"
#include "UIBaseRenderableActor.h"
#include "UIProceduralRectActor.generated.h"

class UUIProceduralRect;

UCLASS()
class LGUI_API AUIProceduralRectActor : public AUIBaseRenderableActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UUIProceduralRect* UIProceduralRect;
    
public:
    AUIProceduralRectActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    UUIProceduralRect* GetUIProceduralRect() const;
    
};

