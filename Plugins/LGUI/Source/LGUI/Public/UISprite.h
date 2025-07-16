#pragma once
#include "CoreMinimal.h"
#include "EUISpriteFillMethod.h"
#include "EUISpriteType.h"
#include "UISpriteBase.h"
#include "UISprite.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUISprite : public UUISpriteBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    EUISpriteType Type;
    
    UPROPERTY(EditAnywhere)
    EUISpriteFillMethod FillMethod;
    
    UPROPERTY(EditAnywhere)
    uint8 fillOrigin;
    
    UPROPERTY(EditAnywhere)
    bool fillDirectionFlip;
    
    UPROPERTY(EditAnywhere)
    float fillAmount;
    
public:
    UUISprite(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSpriteType(EUISpriteType NewType);
    
    UFUNCTION(BlueprintCallable)
    void SetFillOrigin(uint8 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetFillMethod(EUISpriteFillMethod NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetFillDirectionFlip(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetFillAmount(float NewValue);
    
    UFUNCTION(BlueprintPure)
    EUISpriteType GetSpriteType() const;
    
    UFUNCTION(BlueprintPure)
    uint8 GetFillOrigin() const;
    
    UFUNCTION(BlueprintPure)
    EUISpriteFillMethod GetFillMethod() const;
    
    UFUNCTION(BlueprintPure)
    bool GetFillDirectionFlip() const;
    
    UFUNCTION(BlueprintPure)
    float GetFillAmount() const;
    
};

