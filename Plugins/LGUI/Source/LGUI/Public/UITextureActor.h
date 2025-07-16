#pragma once
#include "CoreMinimal.h"
#include "UIBaseRenderableActor.h"
#include "UITextureActor.generated.h"

class UUITexture;

UCLASS()
class LGUI_API AUITextureActor : public AUIBaseRenderableActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UUITexture* UITexture;
    
public:
    AUITextureActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    UUITexture* GetUITexture() const;
    
};

