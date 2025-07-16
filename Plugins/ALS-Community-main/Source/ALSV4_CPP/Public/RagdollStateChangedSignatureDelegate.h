#pragma once
#include "CoreMinimal.h"
#include "RagdollStateChangedSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRagdollStateChangedSignature, bool, bRagdollState);

