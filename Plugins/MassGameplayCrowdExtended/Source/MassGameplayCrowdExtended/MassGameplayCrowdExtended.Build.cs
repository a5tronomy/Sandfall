using UnrealBuildTool;

public class MassGameplayCrowdExtended : ModuleRules {
    public MassGameplayCrowdExtended(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "MassEntity",
            "MassSignals",
            "MassSpawner",
        });
    }
}
