#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SaveGameHelpers.generated.h"

class UObject;
class USaveGame;

UCLASS(BlueprintType)
class SANDFALL_API USaveGameHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USaveGameHelpers();

    UFUNCTION(BlueprintCallable)
    static bool SaveGameToPath(USaveGame* SaveGameObject, const FString& SaveFilePath);
    
    UFUNCTION(BlueprintCallable)
    static USaveGame* LoadGameFromPath(const FString& SaveFilePath);
    
    UFUNCTION(BlueprintCallable)
    static void CopyIdenticalProperties(UObject* FromObject, UObject* ToObject);
    
};

