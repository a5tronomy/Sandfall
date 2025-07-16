#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeReference.h"
#include "KawaiiPhysicsReference.generated.h"

USTRUCT(BlueprintType)
struct FKawaiiPhysicsReference : public FAnimNodeReference {
    GENERATED_BODY()
public:
    KAWAIIPHYSICS_API FKawaiiPhysicsReference();
};

