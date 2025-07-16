#pragma once
#include "CoreMinimal.h"
#include "TargetingFilterTask_BasicFilterTemplate.h"
#include "TargetingFilterTask_ActorClass.generated.h"

UCLASS(EditInlineNew)
class UTargetingFilterTask_ActorClass : public UTargetingFilterTask_BasicFilterTemplate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TArray<UClass*> RequiredActorClassFilters;
    
    UPROPERTY(EditAnywhere)
    TArray<UClass*> IgnoredActorClassFilters;
    
public:
    UTargetingFilterTask_ActorClass();

};

