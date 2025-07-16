#pragma once
#include "CoreMinimal.h"
#include "ProjectCultureData.h"
#include "AssetGroupCultureData.generated.h"

USTRUCT(BlueprintType)
struct FAssetGroupCultureData : public FProjectCultureData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FName AssetGroup;
    
    SANDFALL_API FAssetGroupCultureData();
};

