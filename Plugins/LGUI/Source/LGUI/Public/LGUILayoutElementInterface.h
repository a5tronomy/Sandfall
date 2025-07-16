#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ELayoutElementSizeType.h"
#include "ELayoutElementType.h"
#include "LGUILayoutElementInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class ULGUILayoutElementInterface : public UInterface {
    GENERATED_BODY()
};

class ILGUILayoutElementInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetRatioSize(ELayoutElementSizeType Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ELayoutElementType GetLayoutType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetConstantSize(ELayoutElementSizeType Type) const;
    
};

