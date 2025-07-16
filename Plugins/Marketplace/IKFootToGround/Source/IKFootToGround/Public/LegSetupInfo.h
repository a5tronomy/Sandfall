#pragma once
#include "CoreMinimal.h"
#include "EFootSide.h"
#include "FootCollider.h"
#include "LegSetupInfo.generated.h"

USTRUCT(BlueprintType)
struct IKFOOTTOGROUND_API FLegSetupInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ThighBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName CalfBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName FootBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EFootSide Side;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFootCollider FootCollider;
    
    FLegSetupInfo();
};

