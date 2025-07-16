#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BlueprintSortingHelperLibrary.generated.h"

UCLASS()
class BLUEPRINTSORTING_API UBlueprintSortingHelperLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBlueprintSortingHelperLibrary();

    UFUNCTION()
    static void TestTwoItems(int32& TargetItem1, int32& TargetItem2);
    
    UFUNCTION()
    static void TestThreeItems(int32& TargetItem1, int32& TargetItem2, int32& TargetItem3);
    
    UFUNCTION()
    static void TestItem(int32& TargetItem);
    
    UFUNCTION()
    static void SwapItems(const TArray<int32>& TargetArray, int32& index1, int32& index2);
    
    UFUNCTION()
    static bool LessThanOrEqualArrayLength(const TArray<int32>& TargetArray, int32& Index);
    
    UFUNCTION()
    static int32 Increment(int32 ToIncrement);
    
    UFUNCTION()
    static bool GreaterThanOrEqualArrayLength(const TArray<int32>& TargetArray, int32& Index);
    
};

