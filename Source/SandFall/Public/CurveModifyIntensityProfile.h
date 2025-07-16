#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CurveIntensityData.h"
#include "CurveModifyIntensityProfile.generated.h"

UCLASS()
class SANDFALL_API UCurveModifyIntensityProfile : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TMap<FName, FCurveIntensityData> Profiles;
    
    UCurveModifyIntensityProfile();

};

