#pragma once
#include "CoreMinimal.h"
#include "ProjectCultureData.generated.h"

USTRUCT(BlueprintType)
struct FProjectCultureData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<FString> Culture_IETF_Tag;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<FString> Culture_DisplayName;
    
    UPROPERTY(BlueprintReadOnly)
    int32 SelectedCulture;
    
    SANDFALL_API FProjectCultureData();
};

