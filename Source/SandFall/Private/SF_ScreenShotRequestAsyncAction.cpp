#include "SF_ScreenShotRequestAsyncAction.h"

USF_ScreenShotRequestAsyncAction::USF_ScreenShotRequestAsyncAction() {
    this->RenderTarget = NULL;
}

USF_ScreenShotRequestAsyncAction* USF_ScreenShotRequestAsyncAction::WriteCurrentScreenToRenderTarget(UObject* WorldContextObject, UTextureRenderTarget2D* NewRenderTarget, float FallBackTime, bool bShowUI) {
    return NULL;
}

void USF_ScreenShotRequestAsyncAction::OnScreenShotDone(int32 Width, int32 Height, const TArray<FColor>& Colors) {
}


