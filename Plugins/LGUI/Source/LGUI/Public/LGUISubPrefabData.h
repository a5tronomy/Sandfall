#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LGUIPrefabOverrideParameterData.h"
#include "LGUISubPrefabObjectUniqueId.h"
#include "LGUISubPrefabData.generated.h"

class ULGUIPrefab;
class UObject;

USTRUCT(BlueprintType)
struct LGUI_API FLGUISubPrefabData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    ULGUIPrefab* PrefabAsset;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FLGUIPrefabOverrideParameterData> ObjectOverrideParameterArray;
    
    UPROPERTY(VisibleAnywhere)
    TMap<FGuid, FGuid> MapObjectGuidFromParentPrefabToSubPrefab;
    
    UPROPERTY(VisibleAnywhere)
    TMap<FLGUISubPrefabObjectUniqueId, FGuid> MapObjectIdToNewlyCreatedId;
    
    UPROPERTY(VisibleAnywhere)
    TMap<FGuid, UObject*> MapGuidToObject;
    
    FLGUISubPrefabData();
};

