#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/EngineTypes.h"
#include "EALSFootstepType.h"
#include "ALSAnimNotifyFootstep.generated.h"

class UDataTable;

UCLASS(CollapseCategories)
class ALSV4_CPP_API UALSAnimNotifyFootstep : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDataTable* HitDataTable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName FootSocketName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ETraceTypeQuery> TraceChannel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TraceLength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bSpawnDecal;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bMirrorDecalX;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bMirrorDecalY;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bMirrorDecalZ;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bSpawnSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName SoundParameterName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EALSFootstepType FootstepType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bOverrideMaskCurve;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float VolumeMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float PitchMultiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bSpawnNiagara;
    
    UALSAnimNotifyFootstep();

};

