#pragma once
#include "CoreMinimal.h"
#include "ELGUIEventDelegateParameterType.h"
#include "LGUIEventDelegateData.h"
#include "LGUIEventDelegate.generated.h"

USTRUCT(BlueprintType)
struct LGUI_API FLGUIEventDelegate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TArray<FLGUIEventDelegateData> eventList;
    
    UPROPERTY(EditAnywhere, Transient)
    ELGUIEventDelegateParameterType supportParameterType;
    
public:
    FLGUIEventDelegate();
};

