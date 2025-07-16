#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Styling/SlateTypes.h"
#include "UMGBlueprintHelpers.generated.h"

UCLASS(BlueprintType)
class SANDFALL_API UUMGBlueprintHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUMGBlueprintHelpers();

private:
    UFUNCTION(BlueprintCallable)
    static float GetMaxCharacterHeightFromStyle(const FTextBlockStyle& Style);
    
};

