#pragma once
#include"CommonIncludes.h"
#include"GameEnums.h"
#include"GameAIEnums.h"

struct ObjectFoRInfo
{
	string arrayName;// The array that holds target object

};
struct Exist_B_in_A_st_C_in_B_WRT_DInfo
{
	string nameOfA;
	string nameOfC;
	ElementType typeOfC;
	ElementType typeOfD;

};
struct GameAIBooleanExpression
{
	FrameOfReference frameOfReference;
	GameAIBooleanExpressionType type;
	void* booleanExpressionInfo;
};
// if a box is next to two walls and the two walls are side by side, then the box cannot move

