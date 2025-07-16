#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMouseButtonType.h"
#include "LGUI_PointerInputModule.h"
#include "LGUI_StandaloneInputModule.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API ULGUI_StandaloneInputModule : public ULGUI_PointerInputModule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideMousePosition;
    
    ULGUI_StandaloneInputModule(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void InputTrigger(bool inTriggerPress, EMouseButtonType inMouseButtonType);
    
    UFUNCTION(BlueprintCallable)
    void InputScroll(const FVector2D& inAxisValue);
    
    UFUNCTION(BlueprintCallable)
    void InputOverrideMousePosition(const FVector2D& inMousePosition);
    
};

