#pragma once
#include "CoreMinimal.h"
#include "InterchangeResult.h"
#include "InterchangeResultTextureWarning.generated.h"

UCLASS()
class INTERCHANGEMESSAGES_API UInterchangeResultTextureWarning : public UInterchangeResultWarning {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString TextureName;
    
    UInterchangeResultTextureWarning();

};

