#include "SF_LocalizationGISubsystem.h"

USF_LocalizationGISubsystem::USF_LocalizationGISubsystem() {
}

FProjectCultureData USF_LocalizationGISubsystem::GetGameCultureData(bool GetDisplayNameInCurrentLanguage) {
    return FProjectCultureData{};
}

FName USF_LocalizationGISubsystem::GetAudioAssetGroupName() const {
    return NAME_None;
}

FAssetGroupCultureData USF_LocalizationGISubsystem::GetAssetGroupCultureData(FName AssetGroup, bool GetDisplayNameInCurrentLanguage) {
    return FAssetGroupCultureData{};
}

int32 USF_LocalizationGISubsystem::Get_IETF_TagIndex(const FString& IETF_Tag) {
    return 0;
}

bool USF_LocalizationGISubsystem::ChangeGameCultureSettingsByIndex(int32 CultureIndex) {
    return false;
}

bool USF_LocalizationGISubsystem::ChangeGameCultureSettings(const FString& Culture_IETF_Tag) {
    return false;
}

bool USF_LocalizationGISubsystem::ChangeAssetGroupCultureSettingsByIndex(FName AssetGroup, int32 CultureIndex) {
    return false;
}

bool USF_LocalizationGISubsystem::ChangeAssetGroupCultureSettings(FName AssetGroup, const FString& Culture_IETF_Tag) {
    return false;
}


