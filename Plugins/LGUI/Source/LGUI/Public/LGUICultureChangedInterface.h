#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "LGUICultureChangedInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class ULGUICultureChangedInterface : public UInterface {
    GENERATED_BODY()
};

class ILGUICultureChangedInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCultureChanged();
    
};

