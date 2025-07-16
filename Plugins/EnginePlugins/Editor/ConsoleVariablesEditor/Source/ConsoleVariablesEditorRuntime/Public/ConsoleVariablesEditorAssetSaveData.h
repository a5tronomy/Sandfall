#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateTypes.h"
#include "ConsoleVariablesEditorAssetSaveData.generated.h"

USTRUCT(BlueprintType)
struct FConsoleVariablesEditorAssetSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString CommandName;
    
    UPROPERTY()
    FString CommandValueAsString;
    
    UPROPERTY()
    ECheckBoxState CheckedState;
    
    CONSOLEVARIABLESEDITORRUNTIME_API FConsoleVariablesEditorAssetSaveData();
};

