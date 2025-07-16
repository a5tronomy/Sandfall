#pragma once
#include "CoreMinimal.h"
#include "UIBaseRenderableActor.h"
#include "UI2DLineChildrenAsPointsActor.generated.h"

class UUI2DLineChildrenAsPoints;

UCLASS()
class LGUI_API AUI2DLineChildrenAsPointsActor : public AUIBaseRenderableActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, Transient, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UUI2DLineChildrenAsPoints* UIElement;
    
public:
    AUI2DLineChildrenAsPointsActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    UUI2DLineChildrenAsPoints* Get2DLineChildrenAsPoints() const;
    
};

