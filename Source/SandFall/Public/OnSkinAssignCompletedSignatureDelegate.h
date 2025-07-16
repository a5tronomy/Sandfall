#pragma once
#include "CoreMinimal.h"
#include "OnSkinAssignCompletedSignatureDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSkinAssignCompletedSignature, AActor*, NewBodySkinObject, AActor*, NewFaceSkinObject);

