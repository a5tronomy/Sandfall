#pragma once
#include "CoreMinimal.h"
#include "InterchangeResultMeshError.h"
#include "InterchangeResultMeshError_Generic.generated.h"

UCLASS()
class INTERCHANGEMESSAGES_API UInterchangeResultMeshError_Generic : public UInterchangeResultMeshError {
    GENERATED_BODY()
public:
    UPROPERTY()
    FText Text;
    
    UInterchangeResultMeshError_Generic();

};

