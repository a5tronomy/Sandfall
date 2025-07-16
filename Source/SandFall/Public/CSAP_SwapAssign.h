#pragma once
#include "CoreMinimal.h"
#include "CharacterSkinAssignPolicy.h"
#include "Templates/SubclassOf.h"
#include "CSAP_SwapAssign.generated.h"

class AActor;
class UConfigurableGameUserSettings;
class USceneComponent;

UCLASS()
class SANDFALL_API UCSAP_SwapAssign : public UCharacterSkinAssignPolicy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 CachePoolSize;
    
protected:
    UPROPERTY()
    TSubclassOf<AActor> m_ActiveBodySkinClass;
    
    UPROPERTY()
    TSubclassOf<AActor> m_ActiveFaceSkinClass;
    
    UPROPERTY(Instanced)
    TArray<USceneComponent*> m_MainBodyChildrenComponents;
    
    UPROPERTY()
    TMap<USceneComponent*, bool> m_MainBodyChildrenComponentVisibility;
    
public:
    UCSAP_SwapAssign();

protected:
    UFUNCTION()
    void OnSettingsChanged(const UConfigurableGameUserSettings* UserGameConfig);
    
};

