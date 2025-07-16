#pragma once
#include "CoreMinimal.h"
#include "UIFrameCapture_OnFrameReady_DynamicDelegateDelegate.generated.h"

class UTextureRenderTarget2D;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FUIFrameCapture_OnFrameReady_DynamicDelegate, UTextureRenderTarget2D*, CapturedFrame);

