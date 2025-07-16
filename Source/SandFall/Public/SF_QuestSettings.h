#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "SF_QuestSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class SANDFALL_API USF_QuestSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FSoftObjectPath QuestDataTable;
    
    USF_QuestSettings();

};

