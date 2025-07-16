#include "AnimNode_TailSolver.h"

FAnimNode_TailSolver::FAnimNode_TailSolver() {
    this->use_custom_heights = false;
    this->Tail_Bone_Height = 0.00f;
    this->Animation_Interpolation_Speed = 0.00f;
    this->Trace_Channel = TraceTypeQuery1;
    this->line_trace_hit_complex = false;
    this->Use_Sphere_Trace = false;
    this->Sphere_Trace_Radius = 0.00f;
    this->Trace_Up_Height = 0.00f;
    this->Trace_Down_Height = 0.00f;
    this->TraceBlock_Interpolation_Speed = 0.00f;
    this->TraceUnBlock_Interpolation_Speed = 0.00f;
    this->trace_interval_duration = 0.00f;
    this->Use_LOD_Specific_Intervals = false;
    this->LOD0_Interval = 0.00f;
    this->LOD1_Interval = 0.00f;
    this->LOD2_Interval = 0.00f;
    this->Use_Trace_Distance_Adapting = false;
    this->Trace_Max_Distance = 0.00f;
}

