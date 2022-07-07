#pragma once
#include"GameAIEnums.h"
struct GameAIElementPtrInfo
{
	GameAIElementPtrType type;
	void* elementPtrValue;
};
struct GameAIElementPtr
{
	GameAIElementPtrInfo* pInfo;
	GameAIElementPtr* subPtr;
};

