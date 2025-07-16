#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EFootIKType.h"
#include "EFootSide.h"
#include "FootCollider.h"
#include "LegInfo.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct IKFOOTTOGROUND_API FLegInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName FootBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName RootBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LengthSquared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LengthUnscaled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OffsetToGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AxisMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EFootSide Side;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFootCollider FootCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector CurrentFootLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CurrentFootZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CurrentGroundZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TickTargetZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EFootIKType IKType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FootRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UPrimitiveComponent* HitComponent;
    
    FLegInfo();
};

