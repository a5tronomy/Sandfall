#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "LGUIPointerEnterExitInterface.generated.h"

class ULGUIPointerEventData;

UINTERFACE(Blueprintable, MinimalAPI)
class ULGUIPointerEnterExitInterface : public UInterface {
    GENERATED_BODY()
};

class ILGUIPointerEnterExitInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnPointerExit(ULGUIPointerEventData* EventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnPointerEnter(ULGUIPointerEventData* EventData);
    
};

