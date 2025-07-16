#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DataLayerEditorHelpers.generated.h"

class UDataLayerInstance;

UCLASS(BlueprintType)
class SANDFALL_API UDataLayerEditorHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDataLayerEditorHelpers();

    UFUNCTION(BlueprintCallable)
    static void SetDataLayersVisibility(const TArray<UDataLayerInstance*>& DataLayers, const bool bIsVisible);
    
};

