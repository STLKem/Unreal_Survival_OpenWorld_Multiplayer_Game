// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VoxelNodes/VoxelCoordinatesNodes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeVoxelCoordinatesNodes() {}

// ********** Begin Cross Module References ********************************************************
UPackage* Z_Construct_UPackage__Script_VoxelGraph();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelCoordinateNode();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelCoordinateNode_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GlobalToLocal();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GlobalToLocal_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GlobalX();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GlobalX_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GlobalY();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GlobalY_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GlobalZ();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_GlobalZ_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_InverseTransformVector();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_InverseTransformVector_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_LocalToGlobal();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_LocalToGlobal_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_TransformVector();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_TransformVector_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_XF();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_XF_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_YF();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_YF_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_ZF();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNode_ZF_NoRegister();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeWithContext();
VOXELGRAPH_API UClass* Z_Construct_UClass_UVoxelNodeWithDependencies();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UVoxelCoordinateNode *****************************************************
void UVoxelCoordinateNode::StaticRegisterNativesUVoxelCoordinateNode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelCoordinateNode;
UClass* UVoxelCoordinateNode::GetPrivateStaticClass()
{
	using TClass = UVoxelCoordinateNode;
	if (!Z_Registration_Info_UClass_UVoxelCoordinateNode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelCoordinateNode"),
			Z_Registration_Info_UClass_UVoxelCoordinateNode.InnerSingleton,
			StaticRegisterNativesUVoxelCoordinateNode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UVoxelCoordinateNode.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelCoordinateNode_NoRegister()
{
	return UVoxelCoordinateNode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelCoordinateNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Coordinates" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelCoordinatesNodes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelCoordinateNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelCoordinateNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNodeWithDependencies,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelCoordinateNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelCoordinateNode_Statics::ClassParams = {
	&UVoxelCoordinateNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelCoordinateNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelCoordinateNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelCoordinateNode()
{
	if (!Z_Registration_Info_UClass_UVoxelCoordinateNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelCoordinateNode.OuterSingleton, Z_Construct_UClass_UVoxelCoordinateNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelCoordinateNode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelCoordinateNode);
UVoxelCoordinateNode::~UVoxelCoordinateNode() {}
// ********** End Class UVoxelCoordinateNode *******************************************************

// ********** Begin Class UVoxelNode_XF ************************************************************
void UVoxelNode_XF::StaticRegisterNativesUVoxelNode_XF()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_XF;
UClass* UVoxelNode_XF::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_XF;
	if (!Z_Registration_Info_UClass_UVoxelNode_XF.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_XF"),
			Z_Registration_Info_UClass_UVoxelNode_XF.InnerSingleton,
			StaticRegisterNativesUVoxelNode_XF,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UVoxelNode_XF.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_XF_NoRegister()
{
	return UVoxelNode_XF::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_XF_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Coordinates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Return the current X\n" },
#endif
		{ "DisplayName", "X" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelCoordinatesNodes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return the current X" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_XF>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_XF_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelCoordinateNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_XF_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_XF_Statics::ClassParams = {
	&UVoxelNode_XF::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_XF_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_XF_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_XF()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_XF.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_XF.OuterSingleton, Z_Construct_UClass_UVoxelNode_XF_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_XF.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_XF);
UVoxelNode_XF::~UVoxelNode_XF() {}
// ********** End Class UVoxelNode_XF **************************************************************

// ********** Begin Class UVoxelNode_YF ************************************************************
void UVoxelNode_YF::StaticRegisterNativesUVoxelNode_YF()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_YF;
UClass* UVoxelNode_YF::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_YF;
	if (!Z_Registration_Info_UClass_UVoxelNode_YF.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_YF"),
			Z_Registration_Info_UClass_UVoxelNode_YF.InnerSingleton,
			StaticRegisterNativesUVoxelNode_YF,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UVoxelNode_YF.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_YF_NoRegister()
{
	return UVoxelNode_YF::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_YF_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Coordinates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Return the current Y\n" },
#endif
		{ "DisplayName", "Y" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelCoordinatesNodes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return the current Y" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_YF>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_YF_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelCoordinateNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_YF_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_YF_Statics::ClassParams = {
	&UVoxelNode_YF::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_YF_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_YF_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_YF()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_YF.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_YF.OuterSingleton, Z_Construct_UClass_UVoxelNode_YF_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_YF.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_YF);
UVoxelNode_YF::~UVoxelNode_YF() {}
// ********** End Class UVoxelNode_YF **************************************************************

// ********** Begin Class UVoxelNode_ZF ************************************************************
void UVoxelNode_ZF::StaticRegisterNativesUVoxelNode_ZF()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_ZF;
UClass* UVoxelNode_ZF::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_ZF;
	if (!Z_Registration_Info_UClass_UVoxelNode_ZF.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_ZF"),
			Z_Registration_Info_UClass_UVoxelNode_ZF.InnerSingleton,
			StaticRegisterNativesUVoxelNode_ZF,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UVoxelNode_ZF.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_ZF_NoRegister()
{
	return UVoxelNode_ZF::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_ZF_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Coordinates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Return the current Z\n" },
#endif
		{ "DisplayName", "Z" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelCoordinatesNodes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return the current Z" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_ZF>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_ZF_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelCoordinateNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_ZF_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_ZF_Statics::ClassParams = {
	&UVoxelNode_ZF::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_ZF_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_ZF_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_ZF()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_ZF.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_ZF.OuterSingleton, Z_Construct_UClass_UVoxelNode_ZF_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_ZF.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_ZF);
UVoxelNode_ZF::~UVoxelNode_ZF() {}
// ********** End Class UVoxelNode_ZF **************************************************************

// ********** Begin Class UVoxelNode_GlobalX *******************************************************
void UVoxelNode_GlobalX::StaticRegisterNativesUVoxelNode_GlobalX()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_GlobalX;
UClass* UVoxelNode_GlobalX::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_GlobalX;
	if (!Z_Registration_Info_UClass_UVoxelNode_GlobalX.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_GlobalX"),
			Z_Registration_Info_UClass_UVoxelNode_GlobalX.InnerSingleton,
			StaticRegisterNativesUVoxelNode_GlobalX,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UVoxelNode_GlobalX.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_GlobalX_NoRegister()
{
	return UVoxelNode_GlobalX::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_GlobalX_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Coordinates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Return the current X in global space, before the transform is applied to it. Same as X if not a graph asset\n" },
#endif
		{ "DisplayName", "Global X" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelCoordinatesNodes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return the current X in global space, before the transform is applied to it. Same as X if not a graph asset" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GlobalX>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_GlobalX_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelCoordinateNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GlobalX_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GlobalX_Statics::ClassParams = {
	&UVoxelNode_GlobalX::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GlobalX_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_GlobalX_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_GlobalX()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_GlobalX.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_GlobalX.OuterSingleton, Z_Construct_UClass_UVoxelNode_GlobalX_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_GlobalX.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GlobalX);
UVoxelNode_GlobalX::~UVoxelNode_GlobalX() {}
// ********** End Class UVoxelNode_GlobalX *********************************************************

// ********** Begin Class UVoxelNode_GlobalY *******************************************************
void UVoxelNode_GlobalY::StaticRegisterNativesUVoxelNode_GlobalY()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_GlobalY;
UClass* UVoxelNode_GlobalY::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_GlobalY;
	if (!Z_Registration_Info_UClass_UVoxelNode_GlobalY.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_GlobalY"),
			Z_Registration_Info_UClass_UVoxelNode_GlobalY.InnerSingleton,
			StaticRegisterNativesUVoxelNode_GlobalY,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UVoxelNode_GlobalY.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_GlobalY_NoRegister()
{
	return UVoxelNode_GlobalY::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_GlobalY_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Coordinates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Return the current Y in global space, before the transform is applied to it. Same as Y if not a graph asset\n" },
#endif
		{ "DisplayName", "Global Y" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelCoordinatesNodes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return the current Y in global space, before the transform is applied to it. Same as Y if not a graph asset" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GlobalY>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_GlobalY_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelCoordinateNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GlobalY_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GlobalY_Statics::ClassParams = {
	&UVoxelNode_GlobalY::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GlobalY_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_GlobalY_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_GlobalY()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_GlobalY.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_GlobalY.OuterSingleton, Z_Construct_UClass_UVoxelNode_GlobalY_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_GlobalY.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GlobalY);
UVoxelNode_GlobalY::~UVoxelNode_GlobalY() {}
// ********** End Class UVoxelNode_GlobalY *********************************************************

// ********** Begin Class UVoxelNode_GlobalZ *******************************************************
void UVoxelNode_GlobalZ::StaticRegisterNativesUVoxelNode_GlobalZ()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_GlobalZ;
UClass* UVoxelNode_GlobalZ::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_GlobalZ;
	if (!Z_Registration_Info_UClass_UVoxelNode_GlobalZ.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_GlobalZ"),
			Z_Registration_Info_UClass_UVoxelNode_GlobalZ.InnerSingleton,
			StaticRegisterNativesUVoxelNode_GlobalZ,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UVoxelNode_GlobalZ.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_GlobalZ_NoRegister()
{
	return UVoxelNode_GlobalZ::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_GlobalZ_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Coordinates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Return the current Z in global space, before the transform is applied to it. Same as Z if not a graph asset\n" },
#endif
		{ "DisplayName", "Global Z" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelCoordinatesNodes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return the current Z in global space, before the transform is applied to it. Same as Z if not a graph asset" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GlobalZ>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_GlobalZ_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelCoordinateNode,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GlobalZ_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GlobalZ_Statics::ClassParams = {
	&UVoxelNode_GlobalZ::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GlobalZ_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_GlobalZ_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_GlobalZ()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_GlobalZ.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_GlobalZ.OuterSingleton, Z_Construct_UClass_UVoxelNode_GlobalZ_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_GlobalZ.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GlobalZ);
UVoxelNode_GlobalZ::~UVoxelNode_GlobalZ() {}
// ********** End Class UVoxelNode_GlobalZ *********************************************************

// ********** Begin Class UVoxelNode_LocalToGlobal *************************************************
void UVoxelNode_LocalToGlobal::StaticRegisterNativesUVoxelNode_LocalToGlobal()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_LocalToGlobal;
UClass* UVoxelNode_LocalToGlobal::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_LocalToGlobal;
	if (!Z_Registration_Info_UClass_UVoxelNode_LocalToGlobal.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_LocalToGlobal"),
			Z_Registration_Info_UClass_UVoxelNode_LocalToGlobal.InnerSingleton,
			StaticRegisterNativesUVoxelNode_LocalToGlobal,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UVoxelNode_LocalToGlobal.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_LocalToGlobal_NoRegister()
{
	return UVoxelNode_LocalToGlobal::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_LocalToGlobal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Coordinates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Transform coordinates from local voxel space to global voxel space. Used for graph assets\n" },
#endif
		{ "DisplayName", "Local To Global" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelCoordinatesNodes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transform coordinates from local voxel space to global voxel space. Used for graph assets" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_LocalToGlobal>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_LocalToGlobal_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNodeWithContext,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_LocalToGlobal_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_LocalToGlobal_Statics::ClassParams = {
	&UVoxelNode_LocalToGlobal::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_LocalToGlobal_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_LocalToGlobal_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_LocalToGlobal()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_LocalToGlobal.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_LocalToGlobal.OuterSingleton, Z_Construct_UClass_UVoxelNode_LocalToGlobal_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_LocalToGlobal.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_LocalToGlobal);
UVoxelNode_LocalToGlobal::~UVoxelNode_LocalToGlobal() {}
// ********** End Class UVoxelNode_LocalToGlobal ***************************************************

// ********** Begin Class UVoxelNode_GlobalToLocal *************************************************
void UVoxelNode_GlobalToLocal::StaticRegisterNativesUVoxelNode_GlobalToLocal()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_GlobalToLocal;
UClass* UVoxelNode_GlobalToLocal::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_GlobalToLocal;
	if (!Z_Registration_Info_UClass_UVoxelNode_GlobalToLocal.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_GlobalToLocal"),
			Z_Registration_Info_UClass_UVoxelNode_GlobalToLocal.InnerSingleton,
			StaticRegisterNativesUVoxelNode_GlobalToLocal,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UVoxelNode_GlobalToLocal.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_GlobalToLocal_NoRegister()
{
	return UVoxelNode_GlobalToLocal::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_GlobalToLocal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Coordinates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Transform coordinates from global voxel space to local voxel space. Used for graph assets\n" },
#endif
		{ "DisplayName", "Global To Local" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelCoordinatesNodes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transform coordinates from global voxel space to local voxel space. Used for graph assets" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_GlobalToLocal>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_GlobalToLocal_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNodeWithContext,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GlobalToLocal_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_GlobalToLocal_Statics::ClassParams = {
	&UVoxelNode_GlobalToLocal::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_GlobalToLocal_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_GlobalToLocal_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_GlobalToLocal()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_GlobalToLocal.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_GlobalToLocal.OuterSingleton, Z_Construct_UClass_UVoxelNode_GlobalToLocal_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_GlobalToLocal.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_GlobalToLocal);
UVoxelNode_GlobalToLocal::~UVoxelNode_GlobalToLocal() {}
// ********** End Class UVoxelNode_GlobalToLocal ***************************************************

// ********** Begin Class UVoxelNode_TransformVector ***********************************************
void UVoxelNode_TransformVector::StaticRegisterNativesUVoxelNode_TransformVector()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_TransformVector;
UClass* UVoxelNode_TransformVector::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_TransformVector;
	if (!Z_Registration_Info_UClass_UVoxelNode_TransformVector.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_TransformVector"),
			Z_Registration_Info_UClass_UVoxelNode_TransformVector.InnerSingleton,
			StaticRegisterNativesUVoxelNode_TransformVector,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UVoxelNode_TransformVector.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_TransformVector_NoRegister()
{
	return UVoxelNode_TransformVector::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_TransformVector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Coordinates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Transform vector from local voxel space to global voxel space. Used for graph assets\n" },
#endif
		{ "DisplayName", "Transform Vector" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelCoordinatesNodes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transform vector from local voxel space to global voxel space. Used for graph assets" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_TransformVector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_TransformVector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNodeWithContext,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_TransformVector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_TransformVector_Statics::ClassParams = {
	&UVoxelNode_TransformVector::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_TransformVector_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_TransformVector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_TransformVector()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_TransformVector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_TransformVector.OuterSingleton, Z_Construct_UClass_UVoxelNode_TransformVector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_TransformVector.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_TransformVector);
UVoxelNode_TransformVector::~UVoxelNode_TransformVector() {}
// ********** End Class UVoxelNode_TransformVector *************************************************

// ********** Begin Class UVoxelNode_InverseTransformVector ****************************************
void UVoxelNode_InverseTransformVector::StaticRegisterNativesUVoxelNode_InverseTransformVector()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UVoxelNode_InverseTransformVector;
UClass* UVoxelNode_InverseTransformVector::GetPrivateStaticClass()
{
	using TClass = UVoxelNode_InverseTransformVector;
	if (!Z_Registration_Info_UClass_UVoxelNode_InverseTransformVector.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("VoxelNode_InverseTransformVector"),
			Z_Registration_Info_UClass_UVoxelNode_InverseTransformVector.InnerSingleton,
			StaticRegisterNativesUVoxelNode_InverseTransformVector,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UVoxelNode_InverseTransformVector.InnerSingleton;
}
UClass* Z_Construct_UClass_UVoxelNode_InverseTransformVector_NoRegister()
{
	return UVoxelNode_InverseTransformVector::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UVoxelNode_InverseTransformVector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Coordinates" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Transform vector from global voxel space to local voxel space. Used for graph assets\n" },
#endif
		{ "DisplayName", "Inverse Transform Vector" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VoxelNodes/VoxelCoordinatesNodes.h" },
		{ "ModuleRelativePath", "Public/VoxelNodes/VoxelCoordinatesNodes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transform vector from global voxel space to local voxel space. Used for graph assets" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVoxelNode_InverseTransformVector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVoxelNode_InverseTransformVector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UVoxelNodeWithContext,
	(UObject* (*)())Z_Construct_UPackage__Script_VoxelGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_InverseTransformVector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVoxelNode_InverseTransformVector_Statics::ClassParams = {
	&UVoxelNode_InverseTransformVector::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVoxelNode_InverseTransformVector_Statics::Class_MetaDataParams), Z_Construct_UClass_UVoxelNode_InverseTransformVector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVoxelNode_InverseTransformVector()
{
	if (!Z_Registration_Info_UClass_UVoxelNode_InverseTransformVector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVoxelNode_InverseTransformVector.OuterSingleton, Z_Construct_UClass_UVoxelNode_InverseTransformVector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVoxelNode_InverseTransformVector.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVoxelNode_InverseTransformVector);
UVoxelNode_InverseTransformVector::~UVoxelNode_InverseTransformVector() {}
// ********** End Class UVoxelNode_InverseTransformVector ******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelCoordinatesNodes_h__Script_VoxelGraph_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVoxelCoordinateNode, UVoxelCoordinateNode::StaticClass, TEXT("UVoxelCoordinateNode"), &Z_Registration_Info_UClass_UVoxelCoordinateNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelCoordinateNode), 3188363129U) },
		{ Z_Construct_UClass_UVoxelNode_XF, UVoxelNode_XF::StaticClass, TEXT("UVoxelNode_XF"), &Z_Registration_Info_UClass_UVoxelNode_XF, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_XF), 3438666386U) },
		{ Z_Construct_UClass_UVoxelNode_YF, UVoxelNode_YF::StaticClass, TEXT("UVoxelNode_YF"), &Z_Registration_Info_UClass_UVoxelNode_YF, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_YF), 3755545162U) },
		{ Z_Construct_UClass_UVoxelNode_ZF, UVoxelNode_ZF::StaticClass, TEXT("UVoxelNode_ZF"), &Z_Registration_Info_UClass_UVoxelNode_ZF, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_ZF), 3826918353U) },
		{ Z_Construct_UClass_UVoxelNode_GlobalX, UVoxelNode_GlobalX::StaticClass, TEXT("UVoxelNode_GlobalX"), &Z_Registration_Info_UClass_UVoxelNode_GlobalX, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_GlobalX), 2381534392U) },
		{ Z_Construct_UClass_UVoxelNode_GlobalY, UVoxelNode_GlobalY::StaticClass, TEXT("UVoxelNode_GlobalY"), &Z_Registration_Info_UClass_UVoxelNode_GlobalY, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_GlobalY), 3317698157U) },
		{ Z_Construct_UClass_UVoxelNode_GlobalZ, UVoxelNode_GlobalZ::StaticClass, TEXT("UVoxelNode_GlobalZ"), &Z_Registration_Info_UClass_UVoxelNode_GlobalZ, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_GlobalZ), 2581928876U) },
		{ Z_Construct_UClass_UVoxelNode_LocalToGlobal, UVoxelNode_LocalToGlobal::StaticClass, TEXT("UVoxelNode_LocalToGlobal"), &Z_Registration_Info_UClass_UVoxelNode_LocalToGlobal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_LocalToGlobal), 1163782027U) },
		{ Z_Construct_UClass_UVoxelNode_GlobalToLocal, UVoxelNode_GlobalToLocal::StaticClass, TEXT("UVoxelNode_GlobalToLocal"), &Z_Registration_Info_UClass_UVoxelNode_GlobalToLocal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_GlobalToLocal), 3220936797U) },
		{ Z_Construct_UClass_UVoxelNode_TransformVector, UVoxelNode_TransformVector::StaticClass, TEXT("UVoxelNode_TransformVector"), &Z_Registration_Info_UClass_UVoxelNode_TransformVector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_TransformVector), 4232080366U) },
		{ Z_Construct_UClass_UVoxelNode_InverseTransformVector, UVoxelNode_InverseTransformVector::StaticClass, TEXT("UVoxelNode_InverseTransformVector"), &Z_Registration_Info_UClass_UVoxelNode_InverseTransformVector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVoxelNode_InverseTransformVector), 1562795408U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelCoordinatesNodes_h__Script_VoxelGraph_3525063060(TEXT("/Script/VoxelGraph"),
	Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelCoordinatesNodes_h__Script_VoxelGraph_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CopyForTestingSPESIALworldGeneration_V2_VocselPremium_Plugins_VoxelPlu16d8c64367faV12_Source_VoxelGraph_Public_VoxelNodes_VoxelCoordinatesNodes_h__Script_VoxelGraph_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
