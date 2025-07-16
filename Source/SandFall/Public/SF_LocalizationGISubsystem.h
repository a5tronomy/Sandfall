#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "AssetGroupCultureData.h"
#include "OnCultureChangedBlueprintCallbackDelegate.h"
#include "ProjectCultureData.h"
#include "SF_LocalizationGISubsystem.generated.h"

UCLASS(BlueprintType)
class SANDFALL_API USF_LocalizationGISubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable)
    FOnCultureChangedBlueprintCallback OnCultureChangedBPCallback;
    
public:
    USF_LocalizationGISubsystem();

    UFUNCTION(BlueprintCallable)
    FProjectCultureData GetGameCultureData(bool GetDisplayNameInCurrentLanguage);
    
    UFUNCTION(BlueprintPure)
    FName GetAudioAssetGroupName() const;
    
    UFUNCTION(BlueprintCallable)
    FAssetGroupCultureData GetAssetGroupCultureData(FName AssetGroup, bool GetDisplayNameInCurrentLanguage);
    
    UFUNCTION(BlueprintCallable)
    int32 Get_IETF_TagIndex(const FString& IETF_Tag);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeGameCultureSettingsByIndex(int32 CultureIndex);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeGameCultureSettings(const FString& Culture_IETF_Tag);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeAssetGroupCultureSettingsByIndex(FName AssetGroup, int32 CultureIndex);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeAssetGroupCultureSettings(FName AssetGroup, const FString& Culture_IETF_Tag);
    
};

