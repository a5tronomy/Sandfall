#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SentryUserFeedback.generated.h"

class USentryId;

UCLASS(BlueprintType)
class SENTRY_API USentryUserFeedback : public UObject {
    GENERATED_BODY()
public:
    USentryUserFeedback();

    UFUNCTION(BlueprintCallable)
    void SetName(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    void SetEmail(const FString& Email);
    
    UFUNCTION(BlueprintCallable)
    void SetComment(const FString& Comments);
    
    UFUNCTION(BlueprintCallable)
    void Initialize(USentryId* EventId);
    
    UFUNCTION(BlueprintPure)
    FString GetName() const;
    
    UFUNCTION(BlueprintPure)
    FString GetEmail() const;
    
    UFUNCTION(BlueprintPure)
    FString GetComment() const;
    
};

