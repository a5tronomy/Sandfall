#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LGUIPrefabSequenceObjectReferences.h"
#include "LGUIPrefabSequenceObjectReferenceMap.generated.h"

USTRUCT(BlueprintType)
struct FLGUIPrefabSequenceObjectReferenceMap {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FGuid> BindingIds;
    
    UPROPERTY()
    TArray<FLGUIPrefabSequenceObjectReferences> References;
    
public:
    LGUI_API FLGUIPrefabSequenceObjectReferenceMap();
};

