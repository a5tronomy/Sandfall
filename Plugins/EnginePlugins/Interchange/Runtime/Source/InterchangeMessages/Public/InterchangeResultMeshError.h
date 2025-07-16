#pragma once
#include "CoreMinimal.h"
#include "InterchangeResult.h"
#include "InterchangeResultMeshError.generated.h"

UCLASS()
class INTERCHANGEMESSAGES_API UInterchangeResultMeshError : public UInterchangeResultError {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString MeshName;
    
    UInterchangeResultMeshError();

};

