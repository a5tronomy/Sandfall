#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EXeFGMode.h"
#include "XeFGBlueprintLibrary.generated.h"

UCLASS(BlueprintType)
class UXeFGBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UXeFGBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetXeFGMode(EXeFGMode Mode);
    
    UFUNCTION(BlueprintPure)
    static bool IsXeFGSupported();
    
    UFUNCTION(BlueprintPure)
    static bool IfRelaunchRequiredByXeFG();
    
    UFUNCTION(BlueprintPure)
    static EXeFGMode GetXeFGMode();
    
    UFUNCTION(BlueprintCallable)
    static TArray<EXeFGMode> GetSupportedXeFGModes();
    
};

