#pragma once
#include "CoreMinimal.h"
#include "UIBaseRenderableActor.h"
#include "UISpriteActor.generated.h"

class UUISprite;

UCLASS()
class LGUI_API AUISpriteActor : public AUIBaseRenderableActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UUISprite* UISprite;
    
public:
    AUISpriteActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    UUISprite* GetUISprite() const;
    
};

