#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "LGUIPrefabWorldSubsystem.generated.h"

class AActor;

UCLASS(BlueprintType, NotPlaceable, Transient)
class LGUI_API ULGUIPrefabWorldSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleAnywhere)
    TMap<AActor*, FGuid> AllActors_PrefabSystemProcessing;
    
public:
    ULGUIPrefabWorldSubsystem();

    UFUNCTION(BlueprintPure)
    static bool IsLGUIPrefabSystemProcessingActor(AActor* InActor);
    
};

