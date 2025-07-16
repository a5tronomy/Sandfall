#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "LGUICanLayoutControlAnchor.h"
#include "LGUILayoutInterface.generated.h"

class UUIItem;

UINTERFACE(Blueprintable, MinimalAPI)
class ULGUILayoutInterface : public UInterface {
    GENERATED_BODY()
};

class ILGUILayoutInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUpdateLayout();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MarkRebuildLayout();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetCanLayoutControlAnchor(UUIItem* InUIItem, FLGUICanLayoutControlAnchor& OutResult) const;
    
};

