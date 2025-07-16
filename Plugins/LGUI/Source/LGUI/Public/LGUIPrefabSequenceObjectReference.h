#pragma once
#include "CoreMinimal.h"
#include "LGUIPrefabSequenceObjectReference.generated.h"

class AActor;
class UObject;

USTRUCT()
struct LGUI_API FLGUIPrefabSequenceObjectReference {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UObject* Object;
    
    UPROPERTY()
    AActor* HelperActor;
    
    UPROPERTY()
    UClass* HelperClass;
    
    UPROPERTY()
    FName HelperComponentName;
    
public:
    FLGUIPrefabSequenceObjectReference();
};

