#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LGUIBaseInputModule.generated.h"

UCLASS(Abstract, BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API ULGUIBaseInputModule : public UActorComponent {
    GENERATED_BODY()
public:
    ULGUIBaseInputModule(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ClearEvent();
    
};

