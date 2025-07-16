#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnScreenShotRequestedDoneDelegate.h"
#include "SF_ScreenShotRequestAsyncAction.generated.h"

class UObject;
class USF_ScreenShotRequestAsyncAction;
class UTextureRenderTarget2D;

UCLASS()
class USF_ScreenShotRequestAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnScreenShotRequestedDone OnRequestDone;
    
private:
    UPROPERTY()
    UTextureRenderTarget2D* RenderTarget;
    
public:
    USF_ScreenShotRequestAsyncAction();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USF_ScreenShotRequestAsyncAction* WriteCurrentScreenToRenderTarget(UObject* WorldContextObject, UTextureRenderTarget2D* NewRenderTarget, float FallBackTime, bool bShowUI);
    
private:
    UFUNCTION()
    void OnScreenShotDone(int32 Width, int32 Height, const TArray<FColor>& Colors);
    
};

