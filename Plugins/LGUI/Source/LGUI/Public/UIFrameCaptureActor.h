#pragma once
#include "CoreMinimal.h"
#include "UIBasePostProcessActor.h"
#include "UIFrameCaptureActor.generated.h"

class UUIFrameCapture;

UCLASS()
class LGUI_API AUIFrameCaptureActor : public AUIBasePostProcessActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, Transient, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UUIFrameCapture* UIFrameCapture;
    
public:
    AUIFrameCaptureActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    UUIFrameCapture* GetUIFrameCapture() const;
    
};

