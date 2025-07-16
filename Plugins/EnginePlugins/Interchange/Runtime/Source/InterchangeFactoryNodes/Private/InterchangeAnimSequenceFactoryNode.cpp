#include "InterchangeAnimSequenceFactoryNode.h"

UInterchangeAnimSequenceFactoryNode::UInterchangeAnimSequenceFactoryNode() {
}

bool UInterchangeAnimSequenceFactoryNode::SetCustomSkeletonSoftObjectPath(const FSoftObjectPath& AttributeValue) {
    return false;
}

bool UInterchangeAnimSequenceFactoryNode::SetCustomSkeletonFactoryNodeUid(const FString& AttributeValue) {
    return false;
}

bool UInterchangeAnimSequenceFactoryNode::SetCustomRemoveCurveRedundantKeys(const bool& AttributeValue) {
    return false;
}

bool UInterchangeAnimSequenceFactoryNode::SetCustomMaterialDriveParameterOnCustomAttribute(const bool& AttributeValue) {
    return false;
}

bool UInterchangeAnimSequenceFactoryNode::SetCustomImportBoneTracksSampleRate(const double& AttributeValue) {
    return false;
}

bool UInterchangeAnimSequenceFactoryNode::SetCustomImportBoneTracksRangeStop(const double& AttributeValue) {
    return false;
}

bool UInterchangeAnimSequenceFactoryNode::SetCustomImportBoneTracksRangeStart(const double& AttributeValue) {
    return false;
}

bool UInterchangeAnimSequenceFactoryNode::SetCustomImportBoneTracks(const bool& AttributeValue) {
    return false;
}

bool UInterchangeAnimSequenceFactoryNode::SetCustomImportAttributeCurves(const bool& AttributeValue) {
    return false;
}

bool UInterchangeAnimSequenceFactoryNode::SetCustomDoNotImportCurveWithZero(const bool& AttributeValue) {
    return false;
}

bool UInterchangeAnimSequenceFactoryNode::SetCustomDeleteExistingNonCurveCustomAttributes(const bool& AttributeValue) {
    return false;
}

bool UInterchangeAnimSequenceFactoryNode::SetCustomDeleteExistingMorphTargetCurves(const bool& AttributeValue) {
    return false;
}

bool UInterchangeAnimSequenceFactoryNode::SetCustomDeleteExistingCustomAttributeCurves(const bool& AttributeValue) {
    return false;
}

bool UInterchangeAnimSequenceFactoryNode::SetCustomAddCurveMetadataToSkeleton(const bool& AttributeValue) {
    return false;
}

void UInterchangeAnimSequenceFactoryNode::SetAnimationPayloadKeysForSceneNodeUids(const TMap<FString, FString>& SceneNodeAnimationPayloadKeyUids, const TMap<FString, uint8>& SceneNodeAnimationPayloadKeyTypes) {
}

void UInterchangeAnimSequenceFactoryNode::SetAnimationPayloadKeysForMorphTargetNodeUids(const TMap<FString, FString>& MorphTargetAnimationPayloadKeyUids, const TMap<FString, uint8>& MorphTargetAnimationPayloadKeyTypes) {
}

bool UInterchangeAnimSequenceFactoryNode::SetAnimatedMaterialCurveSuffixe(const FString& MaterialCurveSuffixe) {
    return false;
}

bool UInterchangeAnimSequenceFactoryNode::SetAnimatedAttributeStepCurveName(const FString& AttributeStepCurveName) {
    return false;
}

bool UInterchangeAnimSequenceFactoryNode::SetAnimatedAttributeCurveName(const FString& AttributeCurveName) {
    return false;
}

bool UInterchangeAnimSequenceFactoryNode::RemoveAnimatedMaterialCurveSuffixe(const FString& MaterialCurveSuffixe) {
    return false;
}

bool UInterchangeAnimSequenceFactoryNode::RemoveAnimatedAttributeStepCurveName(const FString& AttributeStepCurveName) {
    return false;
}

bool UInterchangeAnimSequenceFactoryNode::RemoveAnimatedAttributeCurveName(const FString& AttributeCurveName) {
    return false;
}

void UInterchangeAnimSequenceFactoryNode::InitializeAnimSequenceNode(const FString& UniqueID, const FString& DisplayLabel) {
}

void UInterchangeAnimSequenceFactoryNode::GetSceneNodeAnimationPayloadKeys(TMap<FString, FInterchangeAnimationPayLoadKey>& OutSceneNodeAnimationPayloadKeys) const {
}

UClass* UInterchangeAnimSequenceFactoryNode::GetObjectClass() const {
    return NULL;
}

void UInterchangeAnimSequenceFactoryNode::GetMorphTargetNodeAnimationPayloadKeys(TMap<FString, FInterchangeAnimationPayLoadKey>& OutMorphTargetNodeAnimationPayloads) const {
}

bool UInterchangeAnimSequenceFactoryNode::GetCustomSkeletonSoftObjectPath(FSoftObjectPath& AttributeValue) const {
    return false;
}

bool UInterchangeAnimSequenceFactoryNode::GetCustomSkeletonFactoryNodeUid(FString& AttributeValue) const {
    return false;
}

bool UInterchangeAnimSequenceFactoryNode::GetCustomRemoveCurveRedundantKeys(bool& AttributeValue) const {
    return false;
}

bool UInterchangeAnimSequenceFactoryNode::GetCustomMaterialDriveParameterOnCustomAttribute(bool& AttributeValue) const {
    return false;
}

bool UInterchangeAnimSequenceFactoryNode::GetCustomImportBoneTracksSampleRate(double& AttributeValue) const {
    return false;
}

bool UInterchangeAnimSequenceFactoryNode::GetCustomImportBoneTracksRangeStop(double& AttributeValue) const {
    return false;
}

bool UInterchangeAnimSequenceFactoryNode::GetCustomImportBoneTracksRangeStart(double& AttributeValue) const {
    return false;
}

bool UInterchangeAnimSequenceFactoryNode::GetCustomImportBoneTracks(bool& AttributeValue) const {
    return false;
}

bool UInterchangeAnimSequenceFactoryNode::GetCustomImportAttributeCurves(bool& AttributeValue) const {
    return false;
}

bool UInterchangeAnimSequenceFactoryNode::GetCustomDoNotImportCurveWithZero(bool& AttributeValue) const {
    return false;
}

bool UInterchangeAnimSequenceFactoryNode::GetCustomDeleteExistingNonCurveCustomAttributes(bool& AttributeValue) const {
    return false;
}

bool UInterchangeAnimSequenceFactoryNode::GetCustomDeleteExistingMorphTargetCurves(bool& AttributeValue) const {
    return false;
}

bool UInterchangeAnimSequenceFactoryNode::GetCustomDeleteExistingCustomAttributeCurves(bool& AttributeValue) const {
    return false;
}

bool UInterchangeAnimSequenceFactoryNode::GetCustomAddCurveMetadataToSkeleton(bool& AttributeValue) const {
    return false;
}

int32 UInterchangeAnimSequenceFactoryNode::GetAnimatedMaterialCurveSuffixesCount() const {
    return 0;
}

void UInterchangeAnimSequenceFactoryNode::GetAnimatedMaterialCurveSuffixes(TArray<FString>& OutMaterialCurveSuffixes) const {
}

void UInterchangeAnimSequenceFactoryNode::GetAnimatedMaterialCurveSuffixe(const int32 Index, FString& OutMaterialCurveSuffixe) const {
}

int32 UInterchangeAnimSequenceFactoryNode::GetAnimatedAttributeStepCurveNamesCount() const {
    return 0;
}

void UInterchangeAnimSequenceFactoryNode::GetAnimatedAttributeStepCurveNames(TArray<FString>& OutAttributeStepCurveNames) const {
}

void UInterchangeAnimSequenceFactoryNode::GetAnimatedAttributeStepCurveName(const int32 Index, FString& OutAttributeStepCurveName) const {
}

int32 UInterchangeAnimSequenceFactoryNode::GetAnimatedAttributeCurveNamesCount() const {
    return 0;
}

void UInterchangeAnimSequenceFactoryNode::GetAnimatedAttributeCurveNames(TArray<FString>& OutAttributeCurveNames) const {
}

void UInterchangeAnimSequenceFactoryNode::GetAnimatedAttributeCurveName(const int32 Index, FString& OutAttributeCurveName) const {
}


