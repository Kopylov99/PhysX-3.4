// This code contains NVIDIA Confidential Information and is disclosed to you
// under a form of NVIDIA software license agreement provided separately to you.
//
// Notice
// NVIDIA Corporation and its licensors retain all intellectual property and
// proprietary rights in and to this software and related documentation and
// any modifications thereto. Any use, reproduction, disclosure, or
// distribution of this software and related documentation without an express
// license agreement from NVIDIA Corporation is strictly prohibited.
//
// ALL NVIDIA DESIGN SPECIFICATIONS, CODE ARE PROVIDED "AS IS.". NVIDIA MAKES
// NO WARRANTIES, EXPRESSED, IMPLIED, STATUTORY, OR OTHERWISE WITH RESPECT TO
// THE MATERIALS, AND EXPRESSLY DISCLAIMS ALL IMPLIED WARRANTIES OF NONINFRINGEMENT,
// MERCHANTABILITY, AND FITNESS FOR A PARTICULAR PURPOSE.
//
// Information and code furnished is believed to be accurate and reliable.
// However, NVIDIA Corporation assumes no responsibility for the consequences of use of such
// information or for any infringement of patents or other rights of third parties that may
// result from its use. No license is granted by implication or otherwise under any patent
// or patent rights of NVIDIA Corporation. Details are subject to change without notice.
// This code supersedes and replaces all information previously supplied.
// NVIDIA Corporation products are not authorized for use as critical
// components in life support devices or systems without express written approval of
// NVIDIA Corporation.
//
// Copyright (c) 2008-2015 NVIDIA Corporation. All rights reserved.

// This file was generated by NvParameterized/scripts/GenParameterized.pl


#include "GraphicsMaterialData_0p1.h"
#include <string.h>
#include <stdlib.h>

using namespace NvParameterized;

namespace nvidia
{
namespace parameterized
{

using namespace GraphicsMaterialData_0p1NS;

const char* const GraphicsMaterialData_0p1Factory::vptr =
    NvParameterized::getVptr<GraphicsMaterialData_0p1, GraphicsMaterialData_0p1::ClassAlignment>();

const uint32_t NumParamDefs = 18;
static NvParameterized::DefinitionImpl* ParamDefTable; // now allocated in buildTree [NumParamDefs];


static const size_t ParamLookupChildrenTable[] =
{
	1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
};

#define TENUM(type) nvidia::##type
#define CHILDREN(index) &ParamLookupChildrenTable[index]
static const NvParameterized::ParamLookupNode ParamLookupTable[NumParamDefs] =
{
	{ TYPE_STRUCT, false, 0, CHILDREN(0), 16 },
	{ TYPE_STRING, false, (size_t)(&((ParametersStruct*)0)->Name), NULL, 0 }, // Name
	{ TYPE_STRING, false, (size_t)(&((ParametersStruct*)0)->ApplicationMaterialName), NULL, 0 }, // ApplicationMaterialName
	{ TYPE_STRING, false, (size_t)(&((ParametersStruct*)0)->UserProperties), NULL, 0 }, // UserProperties
	{ TYPE_ENUM, false, (size_t)(&((ParametersStruct*)0)->RenderTechnique), NULL, 0 }, // RenderTechnique
	{ TYPE_STRING, false, (size_t)(&((ParametersStruct*)0)->DiffuseTexture), NULL, 0 }, // DiffuseTexture
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->CellColumn), NULL, 0 }, // CellColumn
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->CellRow), NULL, 0 }, // CellRow
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->CellCount), NULL, 0 }, // CellCount
	{ TYPE_BOOL, false, (size_t)(&((ParametersStruct*)0)->CrossBlend), NULL, 0 }, // CrossBlend
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->ColorMultiplier), NULL, 0 }, // ColorMultiplier
	{ TYPE_BOOL, false, (size_t)(&((ParametersStruct*)0)->UsePSM), NULL, 0 }, // UsePSM
	{ TYPE_ENUM, false, (size_t)(&((ParametersStruct*)0)->Resolution), NULL, 0 }, // Resolution
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->FullResPercent), NULL, 0 }, // FullResPercent
	{ TYPE_U32, false, (size_t)(&((ParametersStruct*)0)->HalfResPercent), NULL, 0 }, // HalfResPercent
	{ TYPE_F32, false, (size_t)(&((ParametersStruct*)0)->PSM_ShadowBias), NULL, 0 }, // PSM_ShadowBias
	{ TYPE_STRUCT, false, (size_t)(&((ParametersStruct*)0)->PSM_Frustum), CHILDREN(16), 1 }, // PSM_Frustum
	{ TYPE_BOOL, false, (size_t)(&((FrustumPSM_Type*)0)->OrthographicProjection), NULL, 0 }, // PSM_Frustum.OrthographicProjection
};


bool GraphicsMaterialData_0p1::mBuiltFlag = false;
NvParameterized::MutexType GraphicsMaterialData_0p1::mBuiltFlagMutex;

GraphicsMaterialData_0p1::GraphicsMaterialData_0p1(NvParameterized::Traits* traits, void* buf, int32_t* refCount) :
	NvParameters(traits, buf, refCount)
{
	//mParameterizedTraits->registerFactory(className(), &GraphicsMaterialData_0p1FactoryInst);

	if (!buf) //Do not init data if it is inplace-deserialized
	{
		initDynamicArrays();
		initStrings();
		initReferences();
		initDefaults();
	}
}

GraphicsMaterialData_0p1::~GraphicsMaterialData_0p1()
{
	freeStrings();
	freeReferences();
	freeDynamicArrays();
}

void GraphicsMaterialData_0p1::destroy()
{
	// We cache these fields here to avoid overwrite in destructor
	bool doDeallocateSelf = mDoDeallocateSelf;
	NvParameterized::Traits* traits = mParameterizedTraits;
	int32_t* refCount = mRefCount;
	void* buf = mBuffer;

	this->~GraphicsMaterialData_0p1();

	NvParameters::destroy(this, traits, doDeallocateSelf, refCount, buf);
}

const NvParameterized::DefinitionImpl* GraphicsMaterialData_0p1::getParameterDefinitionTree(void)
{
	if (!mBuiltFlag) // Double-checked lock
	{
		NvParameterized::MutexType::ScopedLock lock(mBuiltFlagMutex);
		if (!mBuiltFlag)
		{
			buildTree();
		}
	}

	return(&ParamDefTable[0]);
}

const NvParameterized::DefinitionImpl* GraphicsMaterialData_0p1::getParameterDefinitionTree(void) const
{
	GraphicsMaterialData_0p1* tmpParam = const_cast<GraphicsMaterialData_0p1*>(this);

	if (!mBuiltFlag) // Double-checked lock
	{
		NvParameterized::MutexType::ScopedLock lock(mBuiltFlagMutex);
		if (!mBuiltFlag)
		{
			tmpParam->buildTree();
		}
	}

	return(&ParamDefTable[0]);
}

NvParameterized::ErrorType GraphicsMaterialData_0p1::getParameterHandle(const char* long_name, Handle& handle) const
{
	ErrorType Ret = NvParameters::getParameterHandle(long_name, handle);
	if (Ret != ERROR_NONE)
	{
		return(Ret);
	}

	size_t offset;
	void* ptr;

	getVarPtr(handle, ptr, offset);

	if (ptr == NULL)
	{
		return(ERROR_INDEX_OUT_OF_RANGE);
	}

	return(ERROR_NONE);
}

NvParameterized::ErrorType GraphicsMaterialData_0p1::getParameterHandle(const char* long_name, Handle& handle)
{
	ErrorType Ret = NvParameters::getParameterHandle(long_name, handle);
	if (Ret != ERROR_NONE)
	{
		return(Ret);
	}

	size_t offset;
	void* ptr;

	getVarPtr(handle, ptr, offset);

	if (ptr == NULL)
	{
		return(ERROR_INDEX_OUT_OF_RANGE);
	}

	return(ERROR_NONE);
}

void GraphicsMaterialData_0p1::getVarPtr(const Handle& handle, void*& ptr, size_t& offset) const
{
	ptr = getVarPtrHelper(&ParamLookupTable[0], const_cast<GraphicsMaterialData_0p1::ParametersStruct*>(&parameters()), handle, offset);
}


/* Dynamic Handle Indices */

void GraphicsMaterialData_0p1::freeParameterDefinitionTable(NvParameterized::Traits* traits)
{
	if (!traits)
	{
		return;
	}

	if (!mBuiltFlag) // Double-checked lock
	{
		return;
	}

	NvParameterized::MutexType::ScopedLock lock(mBuiltFlagMutex);

	if (!mBuiltFlag)
	{
		return;
	}

	for (uint32_t i = 0; i < NumParamDefs; ++i)
	{
		ParamDefTable[i].~DefinitionImpl();
	}

	traits->free(ParamDefTable);

	mBuiltFlag = false;
}

#define PDEF_PTR(index) (&ParamDefTable[index])

void GraphicsMaterialData_0p1::buildTree(void)
{

	uint32_t allocSize = sizeof(NvParameterized::DefinitionImpl) * NumParamDefs;
	ParamDefTable = (NvParameterized::DefinitionImpl*)(mParameterizedTraits->alloc(allocSize));
	memset(ParamDefTable, 0, allocSize);

	for (uint32_t i = 0; i < NumParamDefs; ++i)
	{
		NV_PARAM_PLACEMENT_NEW(ParamDefTable + i, NvParameterized::DefinitionImpl)(*mParameterizedTraits);
	}

	// Initialize DefinitionImpl node: nodeIndex=0, longName=""
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[0];
		ParamDef->init("", TYPE_STRUCT, "STRUCT", true);






	}

	// Initialize DefinitionImpl node: nodeIndex=1, longName="Name"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[1];
		ParamDef->init("Name", TYPE_STRING, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("READONLY", uint64_t(0), true);
		ParamDefTable[1].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("READONLY", uint64_t(0), true);
		HintTable[1].init("shortDescription", "The name of this graphics material", true);
		ParamDefTable[1].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=2, longName="ApplicationMaterialName"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[2];
		ParamDef->init("ApplicationMaterialName", TYPE_STRING, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "The name of the material to match up with the application's material system", true);
		ParamDefTable[2].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=3, longName="UserProperties"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[3];
		ParamDef->init("UserProperties", TYPE_STRING, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Optional user properties string", true);
		ParamDefTable[3].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=4, longName="RenderTechnique"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[4];
		ParamDef->init("RenderTechnique", TYPE_ENUM, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Which sprite rendering technique to apply", true);
		ParamDefTable[4].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */

		static const char* const EnumVals[] = { "SPRITE_ONE", "SPRITE_ONE", "SPRITE_ALPHA", "SPRITE_SOLID", "SPRITE_TEXTURE", "SPRITE_WIREFRAME" };
		ParamDefTable[4].setEnumVals((const char**)EnumVals, 6);




	}

	// Initialize DefinitionImpl node: nodeIndex=5, longName="DiffuseTexture"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[5];
		ParamDef->init("DiffuseTexture", TYPE_STRING, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "The diffuse source texture to render the sprite with.", true);
		ParamDefTable[5].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=6, longName="CellColumn"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[6];
		ParamDef->init("CellColumn", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("max", uint64_t(32), true);
		HintTable[1].init("min", uint64_t(1), true);
		ParamDefTable[6].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("max", uint64_t(32), true);
		HintTable[1].init("min", uint64_t(1), true);
		HintTable[2].init("shortDescription", "The number of columns in the celled texture", true);
		ParamDefTable[6].setHints((const NvParameterized::Hint**)HintPtrTable, 3);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=7, longName="CellRow"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[7];
		ParamDef->init("CellRow", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("max", uint64_t(32), true);
		HintTable[1].init("min", uint64_t(1), true);
		ParamDefTable[7].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("max", uint64_t(32), true);
		HintTable[1].init("min", uint64_t(1), true);
		HintTable[2].init("shortDescription", "The number of rows in the celled texture", true);
		ParamDefTable[7].setHints((const NvParameterized::Hint**)HintPtrTable, 3);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=8, longName="CellCount"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[8];
		ParamDef->init("CellCount", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("max", uint64_t(1024), true);
		HintTable[1].init("min", uint64_t(1), true);
		ParamDefTable[8].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("max", uint64_t(1024), true);
		HintTable[1].init("min", uint64_t(1), true);
		HintTable[2].init("shortDescription", "The total number of frames in the celled animation", true);
		ParamDefTable[8].setHints((const NvParameterized::Hint**)HintPtrTable, 3);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=9, longName="CrossBlend"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[9];
		ParamDef->init("CrossBlend", TYPE_BOOL, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "True if cross blending celled animated sprites", true);
		ParamDefTable[9].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=10, longName="ColorMultiplier"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[10];
		ParamDef->init("ColorMultiplier", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("max", double(10.000000000), true);
		HintTable[1].init("min", double(0.000000000), true);
		ParamDefTable[10].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("max", double(10.000000000), true);
		HintTable[1].init("min", double(0.000000000), true);
		HintTable[2].init("shortDescription", "Multiply this constant times the output color", true);
		ParamDefTable[10].setHints((const NvParameterized::Hint**)HintPtrTable, 3);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=11, longName="UsePSM"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[11];
		ParamDef->init("UsePSM", TYPE_BOOL, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Whether or not to use the PSM pipeline or not", true);
		ParamDefTable[11].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=12, longName="Resolution"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[12];
		ParamDef->init("Resolution", TYPE_ENUM, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "Whether or not to use full-res, half-res, quarter res, or multi-resoluation particle rendering", true);
		ParamDefTable[12].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */

		static const char* const EnumVals[] = { "FULL", "HALF", "QUARTER", "MULTI" };
		ParamDefTable[12].setEnumVals((const char**)EnumVals, 4);




	}

	// Initialize DefinitionImpl node: nodeIndex=13, longName="FullResPercent"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[13];
		ParamDef->init("FullResPercent", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("max", uint64_t(100), true);
		HintTable[1].init("min", uint64_t(0), true);
		ParamDefTable[13].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("max", uint64_t(100), true);
		HintTable[1].init("min", uint64_t(0), true);
		HintTable[2].init("shortDescription", "Percentage of particles to render at full resolution, is using the multi-res feature", true);
		ParamDefTable[13].setHints((const NvParameterized::Hint**)HintPtrTable, 3);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=14, longName="HalfResPercent"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[14];
		ParamDef->init("HalfResPercent", TYPE_U32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("max", uint64_t(100), true);
		HintTable[1].init("min", uint64_t(0), true);
		ParamDefTable[14].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("max", uint64_t(100), true);
		HintTable[1].init("min", uint64_t(0), true);
		HintTable[2].init("shortDescription", "Percentage of particles to reunder at half-resolution; remaining percentage maps to quarter resolution if rendering using the multi-res feature", true);
		ParamDefTable[14].setHints((const NvParameterized::Hint**)HintPtrTable, 3);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=15, longName="PSM_ShadowBias"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[15];
		ParamDef->init("PSM_ShadowBias", TYPE_F32, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("max", double(2.000000000), true);
		HintTable[1].init("min", double(0.000000000), true);
		ParamDefTable[15].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("max", double(2.000000000), true);
		HintTable[1].init("min", double(0.000000000), true);
		ParamDefTable[15].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=16, longName="PSM_Frustum"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[16];
		ParamDef->init("PSM_Frustum", TYPE_STRUCT, "FrustumPSM", true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("shortDescription", "The frustum properties for PSM", true);
		ParamDefTable[16].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=17, longName="PSM_Frustum.OrthographicProjection"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[17];
		ParamDef->init("OrthographicProjection", TYPE_BOOL, NULL, true);






	}

	// SetChildren for: nodeIndex=0, longName=""
	{
		static Definition* Children[16];
		Children[0] = PDEF_PTR(1);
		Children[1] = PDEF_PTR(2);
		Children[2] = PDEF_PTR(3);
		Children[3] = PDEF_PTR(4);
		Children[4] = PDEF_PTR(5);
		Children[5] = PDEF_PTR(6);
		Children[6] = PDEF_PTR(7);
		Children[7] = PDEF_PTR(8);
		Children[8] = PDEF_PTR(9);
		Children[9] = PDEF_PTR(10);
		Children[10] = PDEF_PTR(11);
		Children[11] = PDEF_PTR(12);
		Children[12] = PDEF_PTR(13);
		Children[13] = PDEF_PTR(14);
		Children[14] = PDEF_PTR(15);
		Children[15] = PDEF_PTR(16);

		ParamDefTable[0].setChildren(Children, 16);
	}

	// SetChildren for: nodeIndex=16, longName="PSM_Frustum"
	{
		static Definition* Children[1];
		Children[0] = PDEF_PTR(17);

		ParamDefTable[16].setChildren(Children, 1);
	}

	mBuiltFlag = true;

}
void GraphicsMaterialData_0p1::initStrings(void)
{
	Name.isAllocated = false;
	Name.buf = (const char*)"defaultGraphicsMaterial";
	ApplicationMaterialName.isAllocated = true;
	ApplicationMaterialName.buf = NULL;
	UserProperties.isAllocated = true;
	UserProperties.buf = NULL;
	DiffuseTexture.isAllocated = false;
	DiffuseTexture.buf = (const char*)"SpriteTexture1.dds";
}

void GraphicsMaterialData_0p1::initDynamicArrays(void)
{
}

void GraphicsMaterialData_0p1::initDefaults(void)
{

	freeStrings();
	freeReferences();
	freeDynamicArrays();
	RenderTechnique = (const char*)"SPRITE_ONE";
	CellColumn = uint32_t(1);
	CellRow = uint32_t(1);
	CellCount = uint32_t(1);
	CrossBlend = bool(0);
	ColorMultiplier = float(1.000000000);
	UsePSM = bool(0);
	Resolution = (const char*)"FULL";
	FullResPercent = uint32_t(0);
	HalfResPercent = uint32_t(80);
	PSM_ShadowBias = float(1.000000000);
	PSM_Frustum.OrthographicProjection = bool(1);

	initDynamicArrays();
	initStrings();
	initReferences();
}

void GraphicsMaterialData_0p1::initReferences(void)
{
}

void GraphicsMaterialData_0p1::freeDynamicArrays(void)
{
}

void GraphicsMaterialData_0p1::freeStrings(void)
{

	if (Name.isAllocated && Name.buf)
	{
		mParameterizedTraits->strfree((char*)Name.buf);
	}

	if (ApplicationMaterialName.isAllocated && ApplicationMaterialName.buf)
	{
		mParameterizedTraits->strfree((char*)ApplicationMaterialName.buf);
	}

	if (UserProperties.isAllocated && UserProperties.buf)
	{
		mParameterizedTraits->strfree((char*)UserProperties.buf);
	}

	if (DiffuseTexture.isAllocated && DiffuseTexture.buf)
	{
		mParameterizedTraits->strfree((char*)DiffuseTexture.buf);
	}
}

void GraphicsMaterialData_0p1::freeReferences(void)
{
}

} // namespace parameterized
} // namespace nvidia