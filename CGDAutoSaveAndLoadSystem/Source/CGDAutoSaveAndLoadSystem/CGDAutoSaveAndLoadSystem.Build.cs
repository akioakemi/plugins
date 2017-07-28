// Some copyright should be here...

using UnrealBuildTool;

public class CGDAutoSaveAndLoadSystem : ModuleRules
{
	public CGDAutoSaveAndLoadSystem(ReadOnlyTargetRules Target) : base (Target)
    {
        //Override UnrealEngineBuildTool to speedup compilation times
        MinFilesUsingPrecompiledHeaderOverride = 1;
        bFasterWithoutUnity = true;

        //INCLUDE WHAT YOU NEED CONVENTION ACTIVATION
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bEnforceIWYU = true;

        //Public module names that this module uses.
        //In case you would like to add various classes that you're going to use in your game
        //you should add the core,coreuobject and engine dependencies.
        //Don't forget to add your project's name as a dependency (AMapEditorGameKit in my case)
        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine"});
 
		//The path for the header files
		PublicIncludePaths.AddRange(new string[] { "CGDAutoSaveAndLoadSystem/Public" });
 
		//The path for the source files
		PrivateIncludePaths.AddRange(new string[] { "CGDAutoSaveAndLoadSystem/Private" });
    }
}