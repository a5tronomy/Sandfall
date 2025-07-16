#include "RigUnit_ResetTransformToInitial.h"

FRigUnit_ResetTransformToInitial::FRigUnit_ResetTransformToInitial() {
    this->Space = ERigVMTransformSpace::LocalSpace;
    this->bInitial = false;
    this->bPropagateToChildren = false;
}

