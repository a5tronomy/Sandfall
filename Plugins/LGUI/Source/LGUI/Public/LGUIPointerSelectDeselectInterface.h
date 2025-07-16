#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "LGUIPointerSelectDeselectInterface.generated.h"

class ULGUIBaseEventData;

UINTERFACE(Blueprintable, MinimalAPI)
class ULGUIPointerSelectDeselectInterface : public UInterface {
    GENERATED_BODY()
};

class ILGUIPointerSelectDeselectInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnPointerSelect(ULGUIBaseEventData* EventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnPointerDeselect(ULGUIBaseEventData* EventData);
    
};

