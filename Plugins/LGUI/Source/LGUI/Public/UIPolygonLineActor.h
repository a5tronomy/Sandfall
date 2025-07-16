#pragma once
#include "CoreMinimal.h"
#include "UIBaseRenderableActor.h"
#include "UIPolygonLineActor.generated.h"

class UUIPolygonLine;

UCLASS()
class LGUI_API AUIPolygonLineActor : public AUIBaseRenderableActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, Transient, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UUIPolygonLine* UIPolygonLine;
    
public:
    AUIPolygonLineActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    UUIPolygonLine* GetUIPolygonLine() const;
    
};

