#pragma once
#include "CoreMinimal.h"
#include "UIBasePostProcessActor.h"
#include "UIBackgroundPixelateActor.generated.h"

class UUIBackgroundPixelate;

UCLASS()
class LGUI_API AUIBackgroundPixelateActor : public AUIBasePostProcessActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, Transient, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UUIBackgroundPixelate* UIBackgroundPixelate;
    
public:
    AUIBackgroundPixelateActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    UUIBackgroundPixelate* GetUIBackgroundPixelate() const;
    
};

