// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelEditor_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_VoxelEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_VoxelEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_VoxelEditor.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/VoxelEditor",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x2416903A,
				0x1568F5F1,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_VoxelEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_VoxelEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_VoxelEditor(Z_Construct_UPackage__Script_VoxelEditor, TEXT("/Script/VoxelEditor"), Z_Registration_Info_UPackage__Script_VoxelEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x2416903A, 0x1568F5F1));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
