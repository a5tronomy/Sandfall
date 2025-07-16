using UnrealBuildTool;

public class SandfallEditorTarget : TargetRules {
	public SandfallEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		
		DefaultBuildSettings = BuildSettingsVersion.V5;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		
		ExtraModuleNames.AddRange(new string[] {
			"AndroidPermission",
			"SandFall",
		});
	}
}
