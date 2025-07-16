#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "LGUIPrefabInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class ULGUIPrefabInterface : public UInterface {
    GENERATED_BODY()
};

class ILGUIPrefabInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EditorAwake();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Awake();
    
};

