#pragma once
#include "CoreMinimal.h"
#include "UIBaseActor.h"
#include "UIContainerActor.generated.h"

class UUIItem;

UCLASS()
class LGUI_API AUIContainerActor : public AUIBaseActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UUIItem* UIItem;
    
public:
    AUIContainerActor(const FObjectInitializer& ObjectInitializer);

};

