#pragma once
#include "CoreMinimal.h"
#include "SkillDataComponent_Wrapper.generated.h"

class USkillDataComponent;

USTRUCT(BlueprintType)
struct FSkillDataComponent_Wrapper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    USkillDataComponent* SkillData;
    
    SANDFALL_API FSkillDataComponent_Wrapper();
};

