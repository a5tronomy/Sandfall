#pragma once
#include "CoreMinimal.h"
#include "InterchangeResult.h"
#include "InterchangeResultMeshWarning.generated.h"

UCLASS()
class INTERCHANGEMESSAGES_API UInterchangeResultMeshWarning : public UInterchangeResultWarning {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString MeshName;
    
    UInterchangeResultMeshWarning();

};

