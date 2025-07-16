#pragma once
#include "CoreMinimal.h"
#include "BattleSequenceKeyframeType.h"
#include "BattleSequenceKeyframe.generated.h"

USTRUCT(BlueprintType)
struct SANDFALL_API FBattleSequenceKeyframe {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    BattleSequenceKeyframeType m_keyframeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_time;
    
    FBattleSequenceKeyframe();
};

