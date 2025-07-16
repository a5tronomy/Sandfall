#pragma once
#include "CoreMinimal.h"
#include "CommonInputBaseControllerData.h"
#include "KiBLIIKeysWidgetData.h"
#include "KiBLIICommonInputBaseControllerData.generated.h"

class UKiBLIIKeysWidget;

UCLASS(Abstract)
class KIBLIICOMMONUI_API UKiBLIICommonInputBaseControllerData : public UCommonInputBaseControllerData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly, Instanced)
    UKiBLIIKeysWidget* KeysWidget;
    
    UPROPERTY(Transient)
    TArray<FKiBLIIKeysWidgetData> KeysWidgetData;
    
public:
    UKiBLIICommonInputBaseControllerData();

};

