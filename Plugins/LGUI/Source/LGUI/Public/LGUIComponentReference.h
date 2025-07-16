#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "LGUIComponentReference.generated.h"

class AActor;
class UActorComponent;

USTRUCT(BlueprintType)
struct LGUI_API FLGUIComponentReference {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    AActor* HelperActor;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UActorComponent> HelperClass;
    
    UPROPERTY(VisibleAnywhere)
    FName HelperComponentName;
    
    UPROPERTY(EditAnywhere, Instanced, Transient)
    UActorComponent* TargetComp;
    
public:
    FLGUIComponentReference();
};

