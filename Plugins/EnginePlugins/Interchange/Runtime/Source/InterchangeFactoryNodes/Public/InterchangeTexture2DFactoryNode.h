#pragma once
#include "CoreMinimal.h"
#include "Engine/TextureDefines.h"
#include "InterchangeTextureFactoryNode.h"
#include "InterchangeTexture2DFactoryNode.generated.h"

UCLASS()
class INTERCHANGEFACTORYNODES_API UInterchangeTexture2DFactoryNode : public UInterchangeTextureFactoryNode {
    GENERATED_BODY()
public:
    UInterchangeTexture2DFactoryNode();

    UFUNCTION(BlueprintCallable)
    void SetSourceBlocks(const TMap<int32, FString>& InSourceBlocks);
    
    UFUNCTION(BlueprintCallable)
    void SetSourceBlockByCoordinates(int32 X, int32 Y, const FString& InSourceFile);
    
    UFUNCTION(BlueprintCallable)
    void SetSourceBlock(int32 BlockIndex, const FString& InSourceFile);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAddressY(const TEnumAsByte<TextureAddress> AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAddressX(const TEnumAsByte<TextureAddress> AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintPure)
    TMap<int32, FString> GetSourceBlocks() const;
    
    UFUNCTION(BlueprintPure)
    bool GetSourceBlockByCoordinates(int32 X, int32 Y, FString& OutSourceFile) const;
    
    UFUNCTION(BlueprintPure)
    bool GetSourceBlock(int32 BlockIndex, FString& OutSourceFile) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomAddressY(TEnumAsByte<TextureAddress>& AttributeValue) const;
    
    UFUNCTION(BlueprintPure)
    bool GetCustomAddressX(TEnumAsByte<TextureAddress>& AttributeValue) const;
    
};

