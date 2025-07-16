#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "Blueprint/UserWidget.h"
#include "KiBLIIKeysWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class KIBLIICOMMONUI_API UKiBLIIKeysWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FKey> Keys;
    
    UKiBLIIKeysWidget();

};

