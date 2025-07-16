#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "OnReferenceFlagChangedDelegate.h"
#include "SF_ReferenceCounter.h"
#include "SF_ReferenceCounterHandle.h"
#include "SF_ReferencerCounterUtils.generated.h"

class USF_ReferenceCounterWrapper;

UCLASS(BlueprintType)
class USF_ReferencerCounterUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USF_ReferencerCounterUtils();

    UFUNCTION(BlueprintCallable)
    static void UnbindEventOnChanged(UPARAM(Ref) FSF_ReferenceCounter& Target, FOnReferenceFlagChanged Event);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveReference(UPARAM(Ref) FSF_ReferenceCounter& Target, UPARAM(Ref) FSF_ReferenceCounterHandle& ReferenceHandle);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveAllReferences(UPARAM(Ref) FSF_ReferenceCounter& Target);
    
    UFUNCTION(BlueprintCallable)
    static USF_ReferenceCounterWrapper* MakeReferenceCounterWrapper();
    
    UFUNCTION(BlueprintPure)
    static bool IsHandleValid(FSF_ReferenceCounterHandle ReferenceHandle);
    
    UFUNCTION(BlueprintPure)
    static bool GetReferenceCounterState(const FSF_ReferenceCounter& Target);
    
    UFUNCTION(BlueprintCallable)
    static void BindEventOnChanged(UPARAM(Ref) FSF_ReferenceCounter& Target, FOnReferenceFlagChanged Event);
    
    UFUNCTION(BlueprintCallable)
    static bool AddReference(UPARAM(Ref) FSF_ReferenceCounter& Target, UPARAM(Ref) FSF_ReferenceCounterHandle& ReferenceHandle, const FString& DebugName);
    
};

