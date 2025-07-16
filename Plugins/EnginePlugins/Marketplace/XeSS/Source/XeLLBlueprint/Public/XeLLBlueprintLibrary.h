#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EXeLLMode.h"
#include "XeLLBlueprintLibrary.generated.h"

UCLASS(BlueprintType)
class UXeLLBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UXeLLBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetXeLLMode(const EXeLLMode Mode);
    
    UFUNCTION(BlueprintCallable)
    static void SetFlashIndicatorEnabled(const bool bEnabled);
    
    UFUNCTION(BlueprintPure)
    static bool IsXeLLSupported();
    
    UFUNCTION(BlueprintPure)
    static EXeLLMode GetXeLLMode();
    
    UFUNCTION(BlueprintPure)
    static TArray<EXeLLMode> GetSupportedXeLLModes();
    
    UFUNCTION(BlueprintPure)
    static float GetSimulationLatencyInMs();
    
    UFUNCTION(BlueprintPure)
    static float GetRenderSubmitLatencyInMs();
    
    UFUNCTION(BlueprintPure)
    static float GetRenderLatencyInMs();
    
    UFUNCTION(BlueprintPure)
    static float GetPresentLatencyInMs();
    
    UFUNCTION(BlueprintPure)
    static bool GetLatencyMarkEnabled();
    
    UFUNCTION(BlueprintPure)
    static float GetInputLatencyInMs();
    
    UFUNCTION(BlueprintPure)
    static float GetGameToRenderLatencyInMs();
    
    UFUNCTION(BlueprintPure)
    static float GetGameLatencyInMs();
    
    UFUNCTION(BlueprintPure)
    static bool GetFlashIndicatorEnabled();
    
};

