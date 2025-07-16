#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Camera/PlayerCameraManager.h"
#include "MathHelpers.generated.h"

UCLASS(BlueprintType)
class SANDFALL_API UMathHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMathHelpers();

    UFUNCTION(BlueprintPure)
    static int64 LimitMax_Integer64();
    
    UFUNCTION(BlueprintPure)
    static int32 LimitMax_Integer();
    
    UFUNCTION(BlueprintPure)
    static double LimitMax_Double();
    
    UFUNCTION(BlueprintCallable)
    static float GetBlendAlpha(TEnumAsByte<EViewTargetBlendFunction> BlendFunction, float BlendExp, float Time);
    
};

