#pragma once
#include "CoreMinimal.h"
#include "LGUIPrefab_LoadPrefabCallbackDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FLGUIPrefab_LoadPrefabCallback, AActor*, LoadedRootActor);

