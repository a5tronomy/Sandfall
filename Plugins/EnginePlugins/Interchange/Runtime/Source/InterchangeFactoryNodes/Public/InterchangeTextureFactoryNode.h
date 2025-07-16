#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Nodes/InterchangeFactoryBaseNode.h"
#include "InterchangeTextureFactoryNode.generated.h"

UCLASS(Abstract)
class INTERCHANGEFACTORYNODES_API UInterchangeTextureFactoryNode : public UInterchangeFactoryBaseNode {
    GENERATED_BODY()
public:
    UInterchangeTextureFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomVirtualTextureStreaming(const bool& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomTranslatedTextureNodeUid(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomSRGB(const bool& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomPreferCompressedSourceData(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomPowerOfTwoMode(const uint8& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomPaddingColor(const FColor& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomMipLoadOptions(const uint8& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomMipGenSettings(const uint8& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomMaxTextureSize(const int32& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomLossyCompressionAmount(const uint8& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomLODGroup(const uint8& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomLODBias(const int32& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomFilter(const uint8& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomDownscaleOptions(const uint8& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomDownscale(const float& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomDeferCompression(const bool& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomCompressionSettings(const uint8& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomCompressionQuality(const uint8& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomCompressionNoAlpha(const bool& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomCompositeTextureMode(const uint8& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomCompositePower(const float& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomChromaKeyThreshold(const float& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomChromaKeyColor(const FColor& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustombUseLegacyGamma(const bool& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustombPreserveBorder(const bool& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustombFlipGreenChannel(const bool& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustombDoScaleMipsForAlphaCoverage(const bool& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustombChromaKeyTexture(const bool& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAlphaCoverageThresholds(const FVector4& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAllowNonPowerOfTwo(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAdjustVibrance(const float& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAdjustSaturation(const float& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAdjustRGBCurve(const float& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAdjustMinAlpha(const float& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAdjustMaxAlpha(const float& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAdjustHue(const float& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAdjustBrightnessCurve(const float& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAdjustBrightness(const float& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    void InitializeTextureNode(const FString& UniqueID, const FString& DisplayLabel, const FString& InAssetName);
    
    UFUNCTION(BlueprintPure)
    UClass* GetObjectClass() const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomVirtualTextureStreaming(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomTranslatedTextureNodeUid(FString& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomSRGB(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomPreferCompressedSourceData(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomPowerOfTwoMode(uint8& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomPaddingColor(FColor& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomMipLoadOptions(uint8& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomMipGenSettings(uint8& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomMaxTextureSize(int32& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomLossyCompressionAmount(uint8& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomLODGroup(uint8& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomLODBias(int32& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomFilter(uint8& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomDownscaleOptions(uint8& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomDownscale(float& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomDeferCompression(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomCompressionSettings(uint8& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomCompressionQuality(uint8& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomCompressionNoAlpha(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomCompositeTextureMode(uint8& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomCompositePower(float& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomChromaKeyThreshold(float& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomChromaKeyColor(FColor& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustombUseLegacyGamma(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustombPreserveBorder(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustombFlipGreenChannel(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustombDoScaleMipsForAlphaCoverage(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustombChromaKeyTexture(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomAlphaCoverageThresholds(FVector4& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomAllowNonPowerOfTwo(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomAdjustVibrance(float& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomAdjustSaturation(float& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomAdjustRGBCurve(float& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomAdjustMinAlpha(float& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomAdjustMaxAlpha(float& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomAdjustHue(float& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomAdjustBrightnessCurve(float& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomAdjustBrightness(float& AttributeValue) const;
    
};

