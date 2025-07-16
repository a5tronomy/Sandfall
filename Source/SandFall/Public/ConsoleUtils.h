#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ConsoleUtils.generated.h"

UCLASS(BlueprintType)
class SANDFALL_API UConsoleUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UConsoleUtils();

    UFUNCTION(BlueprintCallable)
    static void SetStringCVar(FName Name, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetIntCVar(FName Name, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetFloatCVar(FName Name, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetBoolCVar(FName Name, bool Value);
    
    UFUNCTION(BlueprintPure)
    static bool IsCVarRegistered(FName Name);
    
    UFUNCTION(BlueprintPure)
    static FString GetStringCVar(FName Name);
    
    UFUNCTION(BlueprintPure)
    static int32 GetIntCVar(FName Name);
    
    UFUNCTION(BlueprintPure)
    static float GetFloatCVar(FName Name);
    
    UFUNCTION(BlueprintPure)
    static bool GetBoolCVar(FName Name);
    
};

