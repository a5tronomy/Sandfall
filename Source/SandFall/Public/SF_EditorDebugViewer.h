#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SF_EditorDebugViewer.generated.h"

UCLASS()
class SANDFALL_API ASF_EditorDebugViewer : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsEnabled;
    
    ASF_EditorDebugViewer(const FObjectInitializer& ObjectInitializer);

};

