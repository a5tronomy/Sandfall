#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ExtendedActorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SANDFALL_API UExtendedActorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UExtendedActorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreSave();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInitializeComponent();
    
};

