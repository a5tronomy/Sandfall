#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "LGUIPointerDragInterface.generated.h"

class ULGUIPointerEventData;

UINTERFACE(Blueprintable, MinimalAPI)
class ULGUIPointerDragInterface : public UInterface {
    GENERATED_BODY()
};

class ILGUIPointerDragInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnPointerEndDrag(ULGUIPointerEventData* EventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnPointerDrag(ULGUIPointerEventData* EventData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnPointerBeginDrag(ULGUIPointerEventData* EventData);
    
};

