#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "Templates/SubclassOf.h"
#include "ALS_BTTask_GetRandomLocation.generated.h"

class UNavigationQueryFilter;

UCLASS()
class ALSV4_CPP_API UALS_BTTask_GetRandomLocation : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MaxDistance;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavigationQueryFilter> Filter;
    
    UALS_BTTask_GetRandomLocation();

};

