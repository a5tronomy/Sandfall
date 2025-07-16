#pragma once
#include "CoreMinimal.h"
#include "CommonInputTypeEnum.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "InputCoreTypes.h"
#include "Styling/SlateBrush.h"
#include "InputBlueprintHelpers.generated.h"

class UCommonInputSubsystem;
class UDataTable;
class UInputAction;
class UInputMappingContext;
class UObject;

UCLASS(BlueprintType)
class SANDFALL_API UInputBlueprintHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UInputBlueprintHelpers();

    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<FKey> TryFindKeysForEnhancedInputActionName(UObject* WorldContextObject, const FName& EnhancedInputActionName);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<FKey> TryFindKeysForEnhancedInputAction(UObject* WorldContextObject, const UInputAction* EnhancedInputAction);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetIgnoreNavigationKeysInAnalogCursor(UObject* WorldContextObject, bool bInIgnoreNavigationKeys);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInGamepadOrKeyboardNavigationMode(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static FKey GetKeyForCommonAction(const UCommonInputSubsystem* CommonInputSubsystem, const FDataTableRowHandle& InputAction);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FKey GetFirstKeyForEnhancedInputActionByInputType(UObject* WorldContextObject, ECommonInputType InputType, const UInputAction* EnhancedInputAction, const UInputMappingContext* InputMappingContext);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FSlateBrush FindInputBrushFromKey(UObject* WorldContextObject, ECommonInputType InputType, FKey Key);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FSlateBrush FindInputBrushFromInputAction(UObject* WorldContextObject, FName InputActionName);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FSlateBrush FindInputBrushFromEnhancedInputActionByInputType(UObject* WorldContextObject, ECommonInputType InputType, const UInputAction* EnhancedInputAction, const UInputMappingContext* InputMappingContext);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FSlateBrush FindInputBrushFromEnhancedInputAction(UObject* WorldContextObject, const UInputAction* EnhancedInputAction);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FSlateBrush FindInputBrushFromCommonUIDataTable(UObject* WorldContextObject, UDataTable* CommonInputActionDataTable, FName InputRowName);
    
};

