#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "ALSNotifyStateOverlayOverride.generated.h"

UCLASS(CollapseCategories, EditInlineNew)
class ALSV4_CPP_API UALSNotifyStateOverlayOverride : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 OverlayOverrideState;
    
    UALSNotifyStateOverlayOverride();

};

