#pragma once
#include "CoreMinimal.h"
#include "TargetingRequestDynamicDelegateDelegate.h"
#include "TargetingRequestData.generated.h"

USTRUCT()
struct FTargetingRequestData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FTargetingRequestDynamicDelegate TargetingRequestDynamicDelegate;
    
    TARGETINGSYSTEM_API FTargetingRequestData();
};

