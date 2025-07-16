#pragma once
#include "CoreMinimal.h"
#include "UILayoutWithChildren.h"
#include "UIRoundedLayout.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class LGUI_API UUIRoundedLayout : public UUILayoutWithChildren {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float Radius;
    
    UPROPERTY(EditAnywhere)
    float StartAngle;
    
    UPROPERTY(EditAnywhere)
    float EndAngle;
    
    UPROPERTY(EditAnywhere)
    bool bSetChildAngle;
    
public:
    UUIRoundedLayout(const FObjectInitializer& ObjectInitializer);

};

