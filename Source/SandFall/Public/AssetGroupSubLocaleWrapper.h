#pragma once
#include "CoreMinimal.h"
#include "AssetGroupSubLocaleWrapper.generated.h"

USTRUCT(BlueprintType)
struct FAssetGroupSubLocaleWrapper {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName AssetGroup;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> AuthorizedCultures;
    
    SANDFALL_API FAssetGroupSubLocaleWrapper();
};

