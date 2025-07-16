#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "LGUIPointerDownUpInterface.generated.h"

class ULGUIPointerEventData;

UINTERFACE(Blueprintable, MinimalAPI)
class ULGUIPointerDownUpInterface : public UInterface {
    GENERATED_BODY()
};

class ILGUIPointerDownUpInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnPointerUp(ULGUIPointerEventData* EventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnPointerDown(ULGUIPointerEventData* EventData);
    
};

