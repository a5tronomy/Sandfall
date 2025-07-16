#pragma once
#include "CoreMinimal.h"
#include "AnimNode_DragonControlBase.h"
#include "AnimNode_DragonTransformRelayer.generated.h"

class UDragonIKTransformReceiverComp;

USTRUCT(BlueprintType)
struct DRAGONIKPLUGIN_API FAnimNode_DragonTransformRelayer : public FAnimNode_DragonControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UDragonIKTransformReceiverComp* transform_receiver_component;
    
    FAnimNode_DragonTransformRelayer();
};

