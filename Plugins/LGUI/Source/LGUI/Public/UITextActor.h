#pragma once
#include "CoreMinimal.h"
#include "UIBaseRenderableActor.h"
#include "UITextActor.generated.h"

class UUIText;

UCLASS()
class LGUI_API AUITextActor : public AUIBaseRenderableActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UUIText* UIText;
    
public:
    AUITextActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    UUIText* GetUIText() const;
    
};

