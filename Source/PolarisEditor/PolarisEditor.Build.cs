using UnrealBuildTool;

    public class PolarisEditor: ModuleRules
    {
         public PolarisEditor(ReadOnlyTargetRules Target) : base(Target)
         {
	         PrivateDependencyModuleNames.AddRange(new string[] {"Core", "CoreUObject", "AssetTools", "Engine", "UnrealEd", "Polaris", "Slate", "SlateCore"});
         }
    }