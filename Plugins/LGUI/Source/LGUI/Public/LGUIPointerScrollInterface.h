#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "LGUIPointerScrollInterface.generated.h"

class ULGUIPointerEventData;

UINTERFACE(Blueprintable, MinimalAPI)
class ULGUIPointerScrollInterface : public UInterface {
    GENERATED_BODY()
};

class ILGUIPointerScrollInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnPointerScroll(ULGUIPointerEventData* EventData);
    
};

