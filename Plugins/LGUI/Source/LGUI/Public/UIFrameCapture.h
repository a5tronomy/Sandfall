#pragma once
#include "CoreMinimal.h"
#include "UIFrameCapture_OnFrameReady_DynamicDelegateDelegate.h"
#include "UIPostProcessRenderable.h"
#include "UIFrameCapture.generated.h"

class UTextureRenderTarget2D;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUIFrameCapture : public UUIPostProcessRenderable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool bCaptureFullScreen;
    
    UPROPERTY(Transient, VisibleAnywhere)
    UTextureRenderTarget2D* CapturedFrame;
    
public:
    UUIFrameCapture(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    UTextureRenderTarget2D* GetCapturedFrame() const;
    
    UFUNCTION(BlueprintCallable)
    void DoCapture(const FUIFrameCapture_OnFrameReady_DynamicDelegate& InDelegate);
    
};

