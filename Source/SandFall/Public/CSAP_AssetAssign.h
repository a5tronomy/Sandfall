#pragma once
#include "CoreMinimal.h"
#include "CharacterSkinAssignPolicy.h"
#include "Templates/SubclassOf.h"
#include "CSAP_AssetAssign.generated.h"

class AActor;

UCLASS()
class SANDFALL_API UCSAP_AssetAssign : public UCharacterSkinAssignPolicy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TSubclassOf<AActor> m_ActiveBodySkinClass;
    
    UPROPERTY()
    TSubclassOf<AActor> m_ActiveFaceSkinClass;
    
public:
    UCSAP_AssetAssign();

};

