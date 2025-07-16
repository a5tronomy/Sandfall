#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Components/ExponentialHeightFogComponent.h"
#include "LightingScenarioHelpers.generated.h"

class UActorComponent;
class UDirectionalLightComponent;
class UExponentialHeightFogComponent;
class ULightComponent;
class ULightComponentBase;
class USkyAtmosphereComponent;
class USkyLightComponent;

UCLASS(BlueprintType)
class SANDFALL_API ULightingScenarioHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    ULightingScenarioHelpers();

    UFUNCTION(BlueprintCallable)
    static void MarkWholeRenderStateDirty(UActorComponent* Target);
    
    UFUNCTION(BlueprintCallable)
    static FExponentialHeightFogData Lerp_FExponentialHeightFogData(const FExponentialHeightFogData& A, const FExponentialHeightFogData& B, float T);
    
    UFUNCTION(BlueprintCallable)
    static FColor Lerp_FColor(FColor A, FColor B, float T);
    
    UFUNCTION(BlueprintCallable)
    static void BlendSkyLightComponent(USkyLightComponent* Source, USkyLightComponent* Destination, USkyLightComponent* Target, float Multiplier);
    
    UFUNCTION(BlueprintCallable)
    static void BlendSkyAtmosphereComponent(USkyAtmosphereComponent* Source, USkyAtmosphereComponent* Destination, USkyAtmosphereComponent* Target, float Multiplier);
    
    UFUNCTION(BlueprintCallable)
    static void BlendLightComponentBase(ULightComponentBase* Source, ULightComponentBase* Destination, ULightComponentBase* Target, float Multiplier);
    
    UFUNCTION(BlueprintCallable)
    static void BlendLightComponent(ULightComponent* Source, ULightComponent* Destination, ULightComponent* Target, float Multiplier);
    
    UFUNCTION(BlueprintCallable)
    static void BlendExponentialHeightFogComponent(UExponentialHeightFogComponent* Source, UExponentialHeightFogComponent* Destination, UExponentialHeightFogComponent* Target, float Multiplier);
    
    UFUNCTION(BlueprintCallable)
    static void BlendDirectionalLightComponent(UDirectionalLightComponent* Source, UDirectionalLightComponent* Destination, UDirectionalLightComponent* Target, float Multiplier);
    
};

