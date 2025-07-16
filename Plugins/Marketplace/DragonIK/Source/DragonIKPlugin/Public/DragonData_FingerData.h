#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DragonData_FingerData.generated.h"

USTRUCT(BlueprintType)
struct FDragonData_FingerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Finger_Bone_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Trace_Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Trace_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Is_Finger_Backward;
    
    DRAGONIKPLUGIN_API FDragonData_FingerData();
};

