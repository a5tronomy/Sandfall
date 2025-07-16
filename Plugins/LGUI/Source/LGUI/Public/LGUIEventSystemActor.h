#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LGUIEventSystemActor.generated.h"

class ULGUIEventSystem;

UCLASS()
class LGUI_API ALGUIEventSystemActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, Transient, VisibleAnywhere)
    ULGUIEventSystem* EventSystem;
    
public:
    ALGUIEventSystemActor(const FObjectInitializer& ObjectInitializer);

};

