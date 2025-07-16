#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "LTweenTickHelperWorldSubsystem.generated.h"

UCLASS(Transient)
class LTWEEN_API ULTweenTickHelperWorldSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    ULTweenTickHelperWorldSubsystem();

};

