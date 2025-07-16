#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SF_AnimationBlueprintHelpers.generated.h"

class IAnimationDataModel;
class UAnimationDataModel;
class UAnimInstance;
class UAnimMontage;

UCLASS(BlueprintType)
class SANDFALL_API USF_AnimationBlueprintHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USF_AnimationBlueprintHelpers();

private:
    UFUNCTION(BlueprintPure)
    static void GetAnimDataModelBoneTrackData(const TScriptInterface<IAnimationDataModel> DataModel, const FName TrackName, TArray<FVector>& PositionKeys, TArray<FQuat>& RotationKeys, TArray<FVector>& ScalingKeys);
    
    UFUNCTION(BlueprintPure)
    static TArray<UAnimMontage*> GetAllActiveMontages(UAnimInstance* AnimInstance);
    
};

