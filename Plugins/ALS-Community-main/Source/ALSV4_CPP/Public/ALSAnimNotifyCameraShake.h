#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Templates/SubclassOf.h"
#include "ALSAnimNotifyCameraShake.generated.h"

class UCameraShakeBase;

UCLASS(CollapseCategories)
class ALSV4_CPP_API UALSAnimNotifyCameraShake : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UCameraShakeBase> ShakeClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Scale;
    
    UALSAnimNotifyCameraShake();

};

