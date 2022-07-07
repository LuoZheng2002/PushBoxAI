#pragma once
#include"GameEnums.h"
struct ScalarWRTConstexprInfo
{
	char* scalarName;
	int scalarConstexpr;
	Relationship relationship;
};
struct ArraySizeWRTArraySizeInfo
{
	char* arrayName1;
	char* arrayName2;
	Relationship relationship;
};
struct ArraySubElementsWRTArraySubElementsInfo
{
	char* arrayName1;
	char* subName1;
	char* arrayName2;
	char* subName2;
	Relationship relationship;
};

struct BooleanStatement
{
	BooleanStatementType type;
	void* pStatementInfo;
};

struct NumericStatement
{

};