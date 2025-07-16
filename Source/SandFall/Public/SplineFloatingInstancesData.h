#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SplineFloatingInstancesData.generated.h"

class UInstancedStaticMeshComponent;

USTRUCT(BlueprintType)
struct FSplineFloatingInstancesData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UInstancedStaticMeshComponent* ISM;
    
    UPROPERTY(BlueprintReadWrite)
    int32 InstanceId;
    
    UPROPERTY(BlueprintReadWrite)
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite)
    FVector Speed;
    
    UPROPERTY(BlueprintReadWrite)
    FRotator Rotation;
    
    SANDFALL_API FSplineFloatingInstancesData();
};

