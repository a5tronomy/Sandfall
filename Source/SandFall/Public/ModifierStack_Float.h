#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "EModifierStackingType.h"
#include "SF_ModifierStackEntryHandle.h"
#include "ModifierStack_Float.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class UModifierStack_Float : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid StackGuid;
    
    UPROPERTY(EditAnywhere)
    EModifierStackingType StackingType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString DebugStackName;
    
    UPROPERTY()
    TMap<FGuid, float> Values;
    
    UPROPERTY(EditAnywhere)
    bool AutoUpdateOnEdit;
    
    UPROPERTY()
    float CurrentValue;
    
    UModifierStack_Float();

    UFUNCTION(BlueprintCallable)
    void UpdateStackValue();
    
    UFUNCTION(BlueprintCallable)
    bool RemoveModifier(UPARAM(Ref) FSF_ModifierStackEntryHandle& ModifierHandle);
    
    UFUNCTION(BlueprintPure)
    float GetCurrentValue() const;
    
    UFUNCTION(BlueprintCallable)
    void AddModifier(float NewValue, UPARAM(Ref) FSF_ModifierStackEntryHandle& OutModifierHandle, const FString& DebugModifierName);
    
};

