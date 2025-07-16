#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OutputDeviceWrapper.generated.h"

UCLASS(BlueprintType)
class SANDFALL_API UOutputDeviceWrapper : public UObject {
    GENERATED_BODY()
public:
    UOutputDeviceWrapper();

    UFUNCTION(BlueprintCallable)
    void Unregister();
    
    UFUNCTION(BlueprintCallable)
    FString Flush();
    
};

