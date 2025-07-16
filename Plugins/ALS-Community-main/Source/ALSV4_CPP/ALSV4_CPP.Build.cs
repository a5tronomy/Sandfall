using UnrealBuildTool;

public class ALSV4_CPP : ModuleRules {
    public ALSV4_CPP(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "Core",
            "CoreUObject",
            "Engine",
            "EnhancedInput",
            "NavigationSystem",
            "Niagara",
            "PhysicsCore",
        });
    }
}
