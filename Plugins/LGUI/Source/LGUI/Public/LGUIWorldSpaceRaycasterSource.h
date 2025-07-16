#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "LGUIWorldSpaceRaycasterSource.generated.h"

class ULGUIBaseRaycaster;
class ULGUIPointerEventData;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class LGUI_API ULGUIWorldSpaceRaycasterSource : public UObject {
    GENERATED_BODY()
public:
    ULGUIWorldSpaceRaycasterSource();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    bool ReceiveShouldStartDrag(ULGUIPointerEventData* InPointerEventData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveInit(ULGUIBaseRaycaster* InRaycaster);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool ReceiveGenerateRay(ULGUIPointerEventData* InPointerEventData, FVector& OutRayOrigin, FVector& OutRayDirection);
    
public:
    UFUNCTION(BlueprintPure)
    ULGUIBaseRaycaster* GetRaycasterObject() const;
    
};

