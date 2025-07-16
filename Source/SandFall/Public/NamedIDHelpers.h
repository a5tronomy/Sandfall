#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NamedIDHelpers.generated.h"

UCLASS(BlueprintType)
class SANDFALL_API UNamedIDHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UNamedIDHelpers();

    UFUNCTION(BlueprintPure)
    static FTopLevelAssetPath GetNamedIDClassPathName();
    
};

