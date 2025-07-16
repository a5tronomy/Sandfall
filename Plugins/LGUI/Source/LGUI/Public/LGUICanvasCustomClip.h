#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "LGUICanvasCustomClip.generated.h"

class ULGUICanvas;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UUIItem;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class LGUI_API ULGUICanvasCustomClip : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TMap<UMaterialInterface*, UMaterialInterface*> replaceMaterialMap;
    
public:
    ULGUICanvasCustomClip();

protected:
    UFUNCTION(BlueprintImplementableEvent)
    bool ReceiveMaterialContainsClipParameter(UMaterialInterface* InMaterial);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveInit();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool ReceiveCheckPointVisible(const FVector& InWorldPoint, ULGUICanvas* InCanvas, UUIItem* InUIItem);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveApplyMaterialParameter(UMaterialInstanceDynamic* InMaterial, ULGUICanvas* InCanvas, UUIItem* InUIItem);
    
};

