#pragma once
#include "CoreMinimal.h"
#include "UIGeometryModifierBase.h"
#include "UIEffectPositionAsUV.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUIEffectPositionAsUV : public UUIGeometryModifierBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    uint8 UVChannel;
    
public:
    UUIEffectPositionAsUV(const FObjectInitializer& ObjectInitializer);

};

