#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "LowerBodyIKResult.h"
#include "LowerBodyIKComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class IKFOOTTOGROUND_API ULowerBodyIKComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName FootBoneNameR;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName CalfBoneNameR;
    
    UPROPERTY(BlueprintReadOnly)
    FName ThighBoneNameR;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName FootBoneNameL;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName CalfBoneNameL;
    
    UPROPERTY(BlueprintReadOnly)
    FName ThighBoneNameL;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName PelvisBoneName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName PelvisVirtualBone;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName FootVirtualBoneR;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName FootVirtualBoneL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ECollisionChannel> CollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bTraceAsObjectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ForwardBackLeanDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RightLeftLeanDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ForwardBackLeanDegrees;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RightLeftLeanDegrees;
    
    UPROPERTY(BlueprintReadWrite)
    float ThighLength;
    
    UPROPERTY(BlueprintReadWrite)
    float CalfLength;
    
    UPROPERTY(BlueprintReadWrite)
    float FootHeight;
    
    UPROPERTY(BlueprintReadWrite)
    float LegHeight;
    
    UPROPERTY(BlueprintReadWrite)
    float PelvisHeight;
    
    UPROPERTY(BlueprintReadOnly)
    FLowerBodyIKResult Result;
    
    UPROPERTY(BlueprintReadOnly)
    bool bEnabledIK;
    
    UPROPERTY(BlueprintReadOnly)
    float ApplyIKAlpha;
    
    UPROPERTY()
    FTransform FrameGroundTransform;
    
    UPROPERTY()
    bool bFrameIsFalling;
    
    UPROPERTY()
    bool bFrameIsFinishingFalling;
    
    UPROPERTY()
    bool bFrameIsMoving;
    
    UPROPERTY()
    bool bFrameIsCrouching;
    
    UPROPERTY()
    float DefaultFootBoneZ;
    
    ULowerBodyIKComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ToggleEnabled(bool bNewIsEnabled);
    
};

