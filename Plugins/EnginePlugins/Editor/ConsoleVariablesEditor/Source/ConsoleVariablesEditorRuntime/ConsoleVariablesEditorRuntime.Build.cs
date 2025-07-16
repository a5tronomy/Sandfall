using UnrealBuildTool;

public class ConsoleVariablesEditorRuntime : ModuleRules {
    public ConsoleVariablesEditorRuntime(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "MovieSceneTracks",
            "SlateCore",
        });
    }
}
