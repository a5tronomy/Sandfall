#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GlobalPostProcessActor.generated.h"

UCLASS()
class SANDFALL_API AGlobalPostProcessActor : public AActor {
    GENERATED_BODY()
public:
    AGlobalPostProcessActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintImplementableEvent)
    void UpdatePostProcessSaturation(float RGBMultiplier, float LuminanceMultiplier);
    
};

