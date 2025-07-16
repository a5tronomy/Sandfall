#include "PlatformsSubsystem.h"

UPlatformsSubsystem::UPlatformsSubsystem() {
}

void UPlatformsSubsystem::TriggerMultipleAchievements(FOnWriteAchievementsFinishedDelegate TriggeredDelegate, TMap<FName, float> AchievementsMap) {
}

void UPlatformsSubsystem::TriggerAchievement(FOnWriteAchievementsFinishedDelegate TriggeredDelegate, const FName& ID) {
}

void UPlatformsSubsystem::SetRichPresence(const FString& InRichPresenceStatus) {
}

void UPlatformsSubsystem::SetPS5ControllerLightColor(FColor Color, bool Enable) {
}

void UPlatformsSubsystem::SetActivityStatus(const FString& ActivityID, EActivityStatus AcitivityStatus) {
}

void UPlatformsSubsystem::ResetAllActivities() {
}

bool UPlatformsSubsystem::ResetAllAchievements() {
    return false;
}

void UPlatformsSubsystem::RegisterLatestGameSaveLoaded(const FString& SaveName) {
}

void UPlatformsSubsystem::QueryEntitlements() {
}

void UPlatformsSubsystem::QueryAchievements() {
}



void UPlatformsSubsystem::OnExternalUIChange(bool Value) {
}

void UPlatformsSubsystem::LoadAndTriggerFailedAchievments() {
}

bool UPlatformsSubsystem::IsUsingSteam() const {
    return false;
}

bool UPlatformsSubsystem::IsUsingCloudSave() const {
    return false;
}

bool UPlatformsSubsystem::IsUserLoggedIn() const {
    return false;
}

bool UPlatformsSubsystem::IsGameStartedFromActivity() {
    return false;
}

bool UPlatformsSubsystem::IsChunkInstalled(int32 ChunkId) const {
    return false;
}

bool UPlatformsSubsystem::HasAnyEntitlement(const TArray<FName>& Entitlements) const {
    return false;
}

bool UPlatformsSubsystem::HasAllEntitlements(const TArray<FName>& Entitlements) const {
    return false;
}

FGameplayTag UPlatformsSubsystem::GetStoreNameAsTag() const {
    return FGameplayTag{};
}

FString UPlatformsSubsystem::GetLatestGameSaveLoaded() {
    return TEXT("");
}

FString UPlatformsSubsystem::GetCurrentUserNickname() {
    return TEXT("");
}

FString UPlatformsSubsystem::GetCurrentUserID() const {
    return TEXT("");
}

TMap<FName, float> UPlatformsSubsystem::GetAchievementsFromCurrentWriteRequest() {
    return TMap<FName, float>();
}

FString UPlatformsSubsystem::ComputeSaveNameWithPath(const FString& SaveName) const {
    return TEXT("");
}

bool UPlatformsSubsystem::ClearAllCloudSaves() {
    return false;
}

void UPlatformsSubsystem::ClearAllBindedEventToGameStartedFromActivity() {
}

void UPlatformsSubsystem::BindToGameStartedFromActivity(FOnGameStartedFromActivity Delegate) {
}

bool UPlatformsSubsystem::AttemptToLoginTheUser() {
    return false;
}


