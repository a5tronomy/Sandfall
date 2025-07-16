#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "ControllerConnectionChangedDelegate.h"
#include "EActivityStatus.h"
#include "HandleAppHasLostFocusDelegate.h"
#include "HandleOnLoggedInUserDelegate.h"
#include "HandlePlatformPauseEventDelegate.h"
#include "OnControllerConfirmedDelegate.h"
#include "OnGameStartedFromActivityDelegate.h"
#include "OnWriteAchievementsFinishedDelegateDelegate.h"
#include "PlatformsSubsystem.generated.h"

UCLASS(Blueprintable)
class SANDFALL_API UPlatformsSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnControllerConfirmed OnControllerConfirmed;
    
    UPROPERTY(BlueprintAssignable)
    FControllerConnectionChanged OnControllerConnectionChanged;
    
    UPROPERTY(BlueprintAssignable)
    FHandlePlatformPauseEvent OnPlatformPauseEvent;
    
    UPROPERTY(BlueprintAssignable)
    FHandleAppHasLostFocus OnAppLostFocusEvent;
    
    UPROPERTY(BlueprintAssignable)
    FHandleOnLoggedInUser OnLoggedInUserEvent;
    
private:
    UPROPERTY()
    TArray<FOnGameStartedFromActivity> GameStartedFromActivtyDelegatesContainer;
    
public:
    UPlatformsSubsystem();

    UFUNCTION(BlueprintCallable)
    void TriggerMultipleAchievements(FOnWriteAchievementsFinishedDelegate TriggeredDelegate, TMap<FName, float> AchievementsMap);
    
    UFUNCTION(BlueprintCallable)
    void TriggerAchievement(FOnWriteAchievementsFinishedDelegate TriggeredDelegate, const FName& ID);
    
    UFUNCTION(BlueprintCallable)
    void SetRichPresence(const FString& InRichPresenceStatus);
    
    UFUNCTION(BlueprintCallable)
    void SetPS5ControllerLightColor(FColor Color, bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void SetActivityStatus(const FString& ActivityID, EActivityStatus AcitivityStatus);
    
    UFUNCTION(BlueprintCallable)
    void ResetAllActivities();
    
    UFUNCTION(BlueprintCallable)
    bool ResetAllAchievements();
    
private:
    UFUNCTION(BlueprintCallable)
    void RegisterLatestGameSaveLoaded(const FString& SaveName);
    
public:
    UFUNCTION(BlueprintCallable)
    void QueryEntitlements();
    
    UFUNCTION(BlueprintCallable)
    void QueryAchievements();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUserIsSelected(bool bIsSellectedUserLoggedIn);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnUserIsLoggedIn(bool bIsUserLoggedIn);
    
private:
    UFUNCTION()
    void OnExternalUIChange(bool Value);
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadAndTriggerFailedAchievments();
    
    UFUNCTION(BlueprintPure)
    bool IsUsingSteam() const;
    
    UFUNCTION(BlueprintPure)
    bool IsUsingCloudSave() const;
    
    UFUNCTION(BlueprintPure)
    bool IsUserLoggedIn() const;
    
    UFUNCTION(BlueprintPure)
    bool IsGameStartedFromActivity();
    
    UFUNCTION(BlueprintPure)
    bool IsChunkInstalled(int32 ChunkId) const;
    
    UFUNCTION(BlueprintPure)
    bool HasAnyEntitlement(const TArray<FName>& Entitlements) const;
    
    UFUNCTION(BlueprintPure)
    bool HasAllEntitlements(const TArray<FName>& Entitlements) const;
    
    UFUNCTION(BlueprintPure)
    FGameplayTag GetStoreNameAsTag() const;
    
private:
    UFUNCTION(BlueprintPure)
    FString GetLatestGameSaveLoaded();
    
public:
    UFUNCTION(BlueprintCallable)
    FString GetCurrentUserNickname();
    
    UFUNCTION(BlueprintPure)
    FString GetCurrentUserID() const;
    
    UFUNCTION(BlueprintCallable)
    TMap<FName, float> GetAchievementsFromCurrentWriteRequest();
    
    UFUNCTION(BlueprintPure)
    FString ComputeSaveNameWithPath(const FString& SaveName) const;
    
    UFUNCTION(BlueprintCallable)
    bool ClearAllCloudSaves();
    
private:
    UFUNCTION(BlueprintCallable)
    void ClearAllBindedEventToGameStartedFromActivity();
    
    UFUNCTION(BlueprintCallable)
    void BindToGameStartedFromActivity(FOnGameStartedFromActivity Delegate);
    
public:
    UFUNCTION(BlueprintCallable)
    bool AttemptToLoginTheUser();
    
};

