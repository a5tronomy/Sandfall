#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "ALSAIController.generated.h"

class UBehaviorTree;

UCLASS()
class ALSV4_CPP_API AALSAIController : public AAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UBehaviorTree* Behaviour;
    
    AALSAIController(const FObjectInitializer& ObjectInitializer);

};

