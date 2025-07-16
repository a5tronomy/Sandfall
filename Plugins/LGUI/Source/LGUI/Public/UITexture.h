#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EUISpriteFillMethod.h"
#include "EUITextureType.h"
#include "EUITextureUVRectControlMode.h"
#include "LGUISpriteInfo.h"
#include "UITextureBase.h"
#include "UITexture.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUITexture : public UUITextureBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EUITextureType Type;
    
    UPROPERTY(EditAnywhere)
    FLGUISpriteInfo spriteData;
    
    UPROPERTY(EditAnywhere)
    EUITextureUVRectControlMode UVRectControlMode;
    
    UPROPERTY(EditAnywhere)
    FVector4 UVRect;
    
    UPROPERTY(EditAnywhere)
    EUISpriteFillMethod FillMethod;
    
    UPROPERTY(EditAnywhere)
    uint8 fillOrigin;
    
    UPROPERTY(EditAnywhere)
    bool fillDirectionFlip;
    
    UPROPERTY(EditAnywhere)
    float fillAmount;
    
public:
    UUITexture(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUVRectControlMode(EUITextureUVRectControlMode NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetUVRect(FVector4 newUVRect);
    
    UFUNCTION(BlueprintCallable)
    void SetTextureType(EUITextureType NewType);
    
    UFUNCTION(BlueprintCallable)
    void SetSpriteData(FLGUISpriteInfo newSpriteData);
    
    UFUNCTION(BlueprintCallable)
    void SetFillOrigin(uint8 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetFillMethod(EUISpriteFillMethod NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetFillDirectionFlip(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetFillAmount(float NewValue);
    
    UFUNCTION(BlueprintPure)
    EUITextureUVRectControlMode GetUVRectControlMode() const;
    
    UFUNCTION(BlueprintPure)
    FVector4 GetUVRect() const;
    
    UFUNCTION(BlueprintPure)
    EUITextureType GetTextureType() const;
    
    UFUNCTION(BlueprintPure)
    FLGUISpriteInfo GetSpriteData() const;
    
    UFUNCTION(BlueprintPure)
    uint8 GetFillOrigin() const;
    
    UFUNCTION(BlueprintPure)
    EUISpriteFillMethod GetFillMethod() const;
    
    UFUNCTION(BlueprintPure)
    bool GetFillDirectionFlip() const;
    
    UFUNCTION(BlueprintPure)
    float GetFillAmount() const;
    
};

