#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "LGUIPointerDragDropInterface.generated.h"

class ULGUIPointerEventData;

UINTERFACE(Blueprintable, MinimalAPI)
class ULGUIPointerDragDropInterface : public UInterface {
    GENERATED_BODY()
};

class ILGUIPointerDragDropInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnPointerDragDrop(ULGUIPointerEventData* EventData);
    
};

