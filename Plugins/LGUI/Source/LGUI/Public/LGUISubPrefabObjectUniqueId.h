#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LGUISubPrefabObjectUniqueId.generated.h"

USTRUCT()
struct FLGUISubPrefabObjectUniqueId {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGuid RootActorGuidInParentPrefab;
    
    UPROPERTY(EditAnywhere)
    FGuid ObjectGuidInOrignPrefab;
    
    LGUI_API FLGUISubPrefabObjectUniqueId();
};
FORCEINLINE uint32 GetTypeHash(const FLGUISubPrefabObjectUniqueId) { return 0; }

