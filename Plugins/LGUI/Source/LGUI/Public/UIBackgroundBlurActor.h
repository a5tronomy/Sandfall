#pragma once
#include "CoreMinimal.h"
#include "UIBasePostProcessActor.h"
#include "UIBackgroundBlurActor.generated.h"

class UUIBackgroundBlur;

UCLASS()
class LGUI_API AUIBackgroundBlurActor : public AUIBasePostProcessActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, Transient, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UUIBackgroundBlur* UIBackgroundBlur;
    
public:
    AUIBackgroundBlurActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    UUIBackgroundBlur* GetUIBackgroundBlur() const;
    
};

