// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ProjectDeliveryHell : ModuleRules
{
	public ProjectDeliveryHell(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate",
			"ProceduralMeshComponent"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { "ProceduralMeshComponent" });

		PublicIncludePaths.AddRange(new string[] {
			"ProjectDeliveryHell",
			"ProjectDeliveryHell/Variant_Platforming",
			"ProjectDeliveryHell/Variant_Platforming/Animation",
			"ProjectDeliveryHell/Variant_Combat",
			"ProjectDeliveryHell/Variant_Combat/AI",
			"ProjectDeliveryHell/Variant_Combat/Animation",
			"ProjectDeliveryHell/Variant_Combat/Gameplay",
			"ProjectDeliveryHell/Variant_Combat/Interfaces",
			"ProjectDeliveryHell/Variant_Combat/UI",
			"ProjectDeliveryHell/Variant_SideScrolling",
			"ProjectDeliveryHell/Variant_SideScrolling/AI",
			"ProjectDeliveryHell/Variant_SideScrolling/Gameplay",
			"ProjectDeliveryHell/Variant_SideScrolling/Interfaces",
			"ProjectDeliveryHell/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
