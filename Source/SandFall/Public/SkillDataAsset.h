#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "SkillDataAsset.generated.h"

class USkillDataComponent;

UCLASS(BlueprintType)
class SANDFALL_API USkillDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer SkillTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    TArray<USkillDataComponent*> SkillComponentList;
    
    USkillDataAsset();

    UFUNCTION(BlueprintPure)
    bool HasSkillTag(FGameplayTag Tag) const;
    
};

