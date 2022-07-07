#pragma once
#include"CommonIncludes.h"
#include"GameElementPtr.h"
struct ScalarAddConstantInfo
{
	ElementPtr* pScalarPtr;
	int constant;
};
struct OperationFunc
{
	OperationType type;
	void* pOperationFuncInfo;
};
struct OperationInfo
{
	uint parameterCount;
	uint* parameterLimits;
	OperationFunc* pOperationFunc;
	uint signalCount;
	char** signalNames;
};

struct SystemOperationInfo
{
	OperationFunc* pOperationFunc;
};

struct OperationSetInfo
{
	uint operationCount;
	OperationInfo* pOperationInfos;
	SystemOperationInfo* pSystemOperationInfo;
};