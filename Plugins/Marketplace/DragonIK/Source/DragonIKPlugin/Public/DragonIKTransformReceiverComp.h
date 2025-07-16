#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "DragonIKTransformReceiverComp.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DRAGONIKPLUGIN_API UDragonIKTransformReceiverComp : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName read_this;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, FTransform> World_Name_Transform_Map;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, FTransform> Component_Name_Transform_Map;
    
    UDragonIKTransformReceiverComp(const FObjectInitializer& ObjectInitializer);

};

