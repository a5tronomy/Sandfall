#pragma once
#include "CoreMinimal.h"
#include "EnableBuildPlatforms.generated.h"

USTRUCT(BlueprintType)
struct FEnableBuildPlatforms {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bEnableLinux;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bEnableWindows;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bEnableIOS;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bEnableAndroid;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bEnableMac;
    
    SENTRY_API FEnableBuildPlatforms();
};

