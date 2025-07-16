#pragma once
#include "CoreMinimal.h"
#include "UIBaseRenderableActor.h"
#include "UIPolygonActor.generated.h"

class UUIPolygon;

UCLASS()
class LGUI_API AUIPolygonActor : public AUIBaseRenderableActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, Transient, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UUIPolygon* UIPolygon;
    
public:
    AUIPolygonActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    UUIPolygon* GetUIPolygon() const;
    
};

