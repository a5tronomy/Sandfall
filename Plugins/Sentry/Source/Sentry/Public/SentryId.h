#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SentryId.generated.h"

UCLASS(BlueprintType)
class SENTRY_API USentryId : public UObject {
    GENERATED_BODY()
public:
    USentryId();

    UFUNCTION(BlueprintPure)
    FString ToString() const;
    
};

