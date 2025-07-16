using UnrealBuildTool;

public class LGUI : ModuleRules {
    public LGUI(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "InputCore",
            "LTween",
            "MovieScene",
            "MovieSceneTracks",
            "Slate",
            "SlateCore",
            "UMG",
        });
    }
}
