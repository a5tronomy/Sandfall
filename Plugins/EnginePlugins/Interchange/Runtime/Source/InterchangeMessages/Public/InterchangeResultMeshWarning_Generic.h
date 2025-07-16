#pragma once
#include "CoreMinimal.h"
#include "InterchangeResultMeshWarning.h"
#include "InterchangeResultMeshWarning_Generic.generated.h"

UCLASS()
class INTERCHANGEMESSAGES_API UInterchangeResultMeshWarning_Generic : public UInterchangeResultMeshWarning {
    GENERATED_BODY()
public:
    UPROPERTY()
    FText Text;
    
    UInterchangeResultMeshWarning_Generic();

};

