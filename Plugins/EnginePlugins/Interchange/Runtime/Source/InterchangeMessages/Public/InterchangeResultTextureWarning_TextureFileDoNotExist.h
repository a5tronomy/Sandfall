#pragma once
#include "CoreMinimal.h"
#include "InterchangeResultTextureWarning.h"
#include "InterchangeResultTextureWarning_TextureFileDoNotExist.generated.h"

UCLASS()
class INTERCHANGEMESSAGES_API UInterchangeResultTextureWarning_TextureFileDoNotExist : public UInterchangeResultTextureWarning {
    GENERATED_BODY()
public:
    UPROPERTY()
    FText Text;
    
    UPROPERTY()
    FString MaterialName;
    
    UInterchangeResultTextureWarning_TextureFileDoNotExist();

};

