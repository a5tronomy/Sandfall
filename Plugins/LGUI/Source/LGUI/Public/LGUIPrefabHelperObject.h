#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "LGUISubPrefabData.h"
#include "LGUIPrefabHelperObject.generated.h"

class AActor;
class ULGUIPrefab;

UCLASS()
class LGUI_API ULGUIPrefabHelperObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    ULGUIPrefab* PrefabAsset;
    
    UPROPERTY(VisibleAnywhere)
    AActor* LoadedRootActor;
    
    UPROPERTY(VisibleAnywhere)
    TMap<FGuid, UObject*> MapGuidToObject;
    
    UPROPERTY(VisibleAnywhere)
    TMap<AActor*, FLGUISubPrefabData> SubPrefabMap;
    
    ULGUIPrefabHelperObject();

};

