#pragma once
#include"CommonIncludes.h"
#include"GameEnums.h"

struct ScalarValue
{
	int value;
};
struct VectorValue
{
	uint elementCount;
	int* pValues;
};
struct SubElementValues
{
	ElementType type;
	const char* name;
	uint elementCount;
	void* pValueStructs;
};
struct ArrayValue
{
	const char* name;
	uint arrayLength;
	uint subElementCount;
	SubElementValues* pSubElementValues;
};

struct ElementValue
{
	ElementType type;
	const char* name; //This parameter should be consistent with that in ChessboardLayout and variables' sequence cannot be changed.
	bool duplicated; //This parameter should be consistent with that in ChessboardLayout.
	void* pValueStruct1; //If duplicated is set to false, this param points to the only struct, otherwise the one owned by you
	void* pValueStruct2;//If duplicated is set to true, this param points to the struct owned by opponent. Otherwise, set it to nullptr.
};