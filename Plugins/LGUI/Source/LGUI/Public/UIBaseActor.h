#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UIBaseActor.generated.h"

class UUIItem;

UCLASS(Abstract)
class LGUI_API AUIBaseActor : public AActor {
    GENERATED_BODY()
public:
    AUIBaseActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintNativeEvent)
    UUIItem* GetUIItem_Impl() const;
    
    UFUNCTION(BlueprintPure)
    UUIItem* GetUIItem_BP() const;
    
    UFUNCTION(BlueprintPure)
    UUIItem* GetUIItem() const;
    
};

