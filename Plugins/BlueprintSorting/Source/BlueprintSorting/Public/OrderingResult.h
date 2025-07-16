#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESortDirection.h"
#include "ESortOrdering.h"
#include "OrderingResult.generated.h"

class UOrderingResult;

UCLASS(BlueprintType)
class BLUEPRINTSORTING_API UOrderingResult : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    ESortOrdering Result;
    
    UOrderingResult();

    UFUNCTION(BlueprintCallable)
    void SetForTexts(const FText& A, const FText& B);
    
    UFUNCTION(BlueprintCallable)
    void SetForStrings(const FString& A, const FString& B);
    
    UFUNCTION(BlueprintCallable)
    void SetForInts(int32 A, int32 B);
    
    UFUNCTION(BlueprintCallable)
    void SetForInt(int32 R);
    
    UFUNCTION(BlueprintCallable)
    void SetForFloat(float R, float Epsilon);
    
    UFUNCTION()
    static UOrderingResult* MakeOrderingResult();
    
    UFUNCTION()
    static bool IsFirstAfterSecond(UOrderingResult* OrderingResult, ESortDirection SortDirection);
    
};

