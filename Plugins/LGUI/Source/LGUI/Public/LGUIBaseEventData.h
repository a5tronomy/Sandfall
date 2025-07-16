#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPointerEventType.h"
#include "LGUIBaseEventData.generated.h"

class USceneComponent;

UCLASS(BlueprintType)
class LGUI_API ULGUIBaseEventData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USceneComponent* SelectedComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPointerEventType EventType;
    
    ULGUIBaseEventData();

    UFUNCTION(BlueprintPure)
    FString ToString() const;
    
};

