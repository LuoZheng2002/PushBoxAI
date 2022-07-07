#pragma once
#include"GameAIEnums.h"
#include"GameAIConditions.h"
#include"GameAIElementPtr.h"

struct Theorem
{
	GameAIElementPtr* pGlobalElement;
	GameAIBooleanExpression* pConditionExpression;
	GameAIBooleanExpression* pConclusionExpression;
};