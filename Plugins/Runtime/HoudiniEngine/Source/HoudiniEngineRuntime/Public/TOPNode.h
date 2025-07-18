#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AggregatedWorkItemTally.h"
#include "EPDGNodeState.h"
#include "HoudiniClearedEditLayers.h"
#include "HoudiniPDGWorkResultObjectBakedOutput.h"
#include "OutputActorOwner.h"
#include "TOPWorkResult.h"
#include "WorkItemTally.h"
#include "TOPNode.generated.h"

UCLASS()
class HOUDINIENGINERUNTIME_API UTOPNode : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(NonTransactional, Transient)
    int32 NodeID;
    
    UPROPERTY(NonTransactional)
    FString NodeName;
    
    UPROPERTY(NonTransactional)
    FString NodePath;
    
    UPROPERTY(NonTransactional)
    FString ParentName;
    
    UPROPERTY()
    UObject* WorkResultParent;
    
    UPROPERTY(NonTransactional)
    TArray<FTOPWorkResult> WorkResult;
    
    UPROPERTY()
    bool bHidden;
    
    UPROPERTY()
    bool bAutoLoad;
    
    UPROPERTY(NonTransactional, Transient)
    EPDGNodeState NodeState;
    
    UPROPERTY(NonTransactional)
    bool bCachedHaveNotLoadedWorkResults;
    
    UPROPERTY(NonTransactional)
    bool bCachedHaveLoadedWorkResults;
    
    UPROPERTY(NonTransactional)
    bool bHasChildNodes;
    
    UPROPERTY()
    TSet<FString> ClearedLandscapeLayers;
    
    UPROPERTY()
    FHoudiniClearedEditLayers ClearedLayers;
    
protected:
    UPROPERTY()
    bool bShow;
    
    UPROPERTY()
    TMap<FString, FHoudiniPDGWorkResultObjectBakedOutput> BakedWorkResultObjectOutputs;
    
    UPROPERTY(NonTransactional, Transient)
    FWorkItemTally WorkItemTally;
    
    UPROPERTY(NonTransactional, Transient)
    FAggregatedWorkItemTally AggregatedWorkItemTally;
    
    UPROPERTY(NonTransactional, Transient)
    bool bHasReceivedCookCompleteEvent;
    
private:
    UPROPERTY()
    FOutputActorOwner OutputActorOwner;
    
public:
    UTOPNode();

};

