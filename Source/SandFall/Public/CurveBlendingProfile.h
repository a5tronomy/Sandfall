#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CurveBlendingProfile.generated.h"

UCLASS()
class SANDFALL_API UCurveBlendingProfile : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TMap<FName, float> Profiles;
    
    UCurveBlendingProfile();

};

