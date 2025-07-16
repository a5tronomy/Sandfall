#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "FootTraceData.generated.h"

USTRUCT()
struct IKFOOTTOGROUND_API FFootTraceData {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Alpha;
    
    UPROPERTY()
    float CurrentVerticalOffset;
    
    UPROPERTY()
    bool bTraced;
    
    UPROPERTY()
    float FootOffsetFrom;
    
    UPROPERTY()
    float FootOffsetTo;
    
    UPROPERTY()
    FQuat RotationCS;
    
    UPROPERTY()
    FVector TracedRotation;
    
    FFootTraceData();
};

