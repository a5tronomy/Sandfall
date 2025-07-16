#pragma once
#include "CoreMinimal.h"
#include "LGUIPrefabSequenceObjectReference.h"
#include "LGUIPrefabSequenceObjectReferences.generated.h"

USTRUCT()
struct FLGUIPrefabSequenceObjectReferences {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FLGUIPrefabSequenceObjectReference> Array;
    
    LGUI_API FLGUIPrefabSequenceObjectReferences();
};

