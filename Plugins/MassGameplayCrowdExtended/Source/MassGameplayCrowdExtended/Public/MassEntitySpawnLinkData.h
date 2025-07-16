#pragma once
#include "CoreMinimal.h"
#include "MassEntitySpawnLinkData.generated.h"

USTRUCT()
struct FMassEntitySpawnLinkData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString ParentLink;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FString> ChildsLink;
    
    MASSGAMEPLAYCROWDEXTENDED_API FMassEntitySpawnLinkData();
};

