#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "CharacterFootStepDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FCharacterFootStep, FName, bone_name, FTransform, foot_transform, float, height_difference, FHitResult, hit_info);

