#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "SF_DataTableGettersSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class SANDFALL_API USF_DataTableGettersSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    TArray<FSoftObjectPath> DataTables;
    
    USF_DataTableGettersSettings();

};

