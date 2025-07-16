#pragma once
#include "CoreMinimal.h"
#include "ELGUISceneComponentDirection.h"
#include "LGUIWorldSpaceRaycasterSource.h"
#include "LGUIWorldSpaceRaycasterSource_World.generated.h"

UCLASS(EditInlineNew)
class LGUI_API ULGUIWorldSpaceRaycasterSource_World : public ULGUIWorldSpaceRaycasterSource {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ELGUISceneComponentDirection RayDirectionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool clickThresholdRelateToRayDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float rayDistanceMultiply;
    
public:
    ULGUIWorldSpaceRaycasterSource_World();

};

