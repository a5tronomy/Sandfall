#pragma once
#include "CoreMinimal.h"
#include "LGUIRichTextImageData_BaseObject.h"
#include "LGUIRichTextImageItemData.h"
#include "LGUIRichTextImageData.generated.h"

UCLASS(BlueprintType)
class LGUI_API ULGUIRichTextImageData : public ULGUIRichTextImageData_BaseObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TMap<FName, FLGUIRichTextImageItemData> imageMap;
    
    UPROPERTY(EditAnywhere)
    float animationFps;
    
public:
    ULGUIRichTextImageData();

    UFUNCTION(BlueprintCallable)
    void SetImageMap(const TMap<FName, FLGUIRichTextImageItemData>& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimationFps(float Value);
    
    UFUNCTION(BlueprintCallable)
    TMap<FName, FLGUIRichTextImageItemData> GetMutableImageMap();
    
    UFUNCTION(BlueprintPure)
    TMap<FName, FLGUIRichTextImageItemData> GetImageMap() const;
    
    UFUNCTION(BlueprintPure)
    float GetAnimationFps() const;
    
    UFUNCTION(BlueprintCallable)
    void BroadcastOnDataChange();
    
};

