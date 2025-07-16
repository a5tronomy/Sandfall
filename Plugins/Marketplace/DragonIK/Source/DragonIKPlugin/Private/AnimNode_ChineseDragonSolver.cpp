#include "AnimNode_ChineseDragonSolver.h"

FAnimNode_ChineseDragonSolver::FAnimNode_ChineseDragonSolver() {
    this->Stability_Reference_Bone_Index = 0;
    this->Use_Advanced_Strict_Chain_Logic = false;
    this->Limit_Z_Solving = false;
    this->Fix_Root_in_Place = false;
    this->Continous_Normalization = false;
    this->Normalization_Speed = 0.00f;
    this->Preserve_Original_Pose = false;
    this->Pelvis_Positioning_Calibration_Value = 0.00f;
    this->Enable_AnimBP_Viewport_Output = false;
    this->Use_Scale_Add_Mode = false;
    this->Use_Rot_Add_Mode = false;
    this->rotation_relative_to_mesh = false;
    this->Use_Warmup_Logic = false;
    this->Initial_Warmup_Distance = 0.00f;
    this->Reset_To_Normal = false;
    this->Use_Interpolation = false;
    this->Interpolation_Speed = 0.00f;
    this->Reset_ON_Interpolation_Speed = 0.00f;
    this->Reset_OFF_Interpolation_Speed = 0.00f;
    this->Precision = 0.00f;
}

