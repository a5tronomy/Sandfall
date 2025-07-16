#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "LGUI_PointerInputModule.h"
#include "LGUI_TouchInputModule.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API ULGUI_TouchInputModule : public ULGUI_PointerInputModule {
    GENERATED_BODY()
public:
    ULGUI_TouchInputModule(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void InputTouchTrigger(bool inTouchPress, int32 inTouchID, const FVector& inTouchPointPosition);
    
    UFUNCTION(BlueprintCallable)
    void InputTouchMoved(int32 inTouchID, const FVector& inTouchPointPosition);
    
    UFUNCTION(BlueprintCallable)
    void InputScroll(const FVector2D& inAxisValue);
    
};

