#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "Sections/MovieSceneConsoleVariableTrackInterface.h"
#include "ConsoleVariablesEditorAssetSaveData.h"
#include "ConsoleVariablesAsset.generated.h"

class UConsoleVariablesAsset;

UCLASS(BlueprintType)
class CONSOLEVARIABLESEDITORRUNTIME_API UConsoleVariablesAsset : public UObject, public IMovieSceneConsoleVariableTrackInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VariableCollectionDescription;
    
    UPROPERTY()
    TArray<FConsoleVariablesEditorAssetSaveData> SavedCommands;
    
public:
    UConsoleVariablesAsset();

    UFUNCTION(BlueprintCallable)
    void SetVariableCollectionDescription(const FString& InVariableCollectionDescription);
    
    UFUNCTION(BlueprintCallable)
    void ReplaceSavedCommands(const TArray<FConsoleVariablesEditorAssetSaveData>& Replacement);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveConsoleVariable(const FString& InCommandString);
    
    UFUNCTION(BlueprintPure)
    FString GetVariableCollectionDescription() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSavedCommandsCount() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FString> GetSavedCommandsAsStringArray(bool bOnlyIncludeChecked) const;
    
    UFUNCTION(BlueprintPure)
    FString GetSavedCommandsAsCommaSeparatedString(bool bOnlyIncludeChecked) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FConsoleVariablesEditorAssetSaveData> GetSavedCommands() const;
    
    UFUNCTION(BlueprintPure)
    bool FindSavedDataByCommandString(const FString& InCommandString, FConsoleVariablesEditorAssetSaveData& OutValue, const TEnumAsByte<ESearchCase::Type> SearchCase) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false, meta=(WorldContext="WorldContextObject"))
    void ExecuteSavedCommands(UObject* WorldContextObject, bool bOnlyIncludeChecked) const;
    
    UFUNCTION(BlueprintCallable)
    void CopyFrom(const UConsoleVariablesAsset* InAssetToCopy);
    
    UFUNCTION(BlueprintCallable)
    void AddOrSetConsoleObjectSavedData(const FConsoleVariablesEditorAssetSaveData& InData);
    

    // Fix for true pure virtual functions not being implemented
};

