#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ELGUINavigationDirection.h"
#include "LGUINavigationInterface.generated.h"

class ILGUINavigationInterface;
class ULGUINavigationInterface;

UINTERFACE(Blueprintable, MinimalAPI)
class ULGUINavigationInterface : public UInterface {
    GENERATED_BODY()
};

class ILGUINavigationInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnNavigate(ELGUINavigationDirection Direction, TScriptInterface<ILGUINavigationInterface>& Result);
    
};

