#pragma once
#include"CommonIncludes.h"
#include"GameEnums.h"
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
struct ConditionExpression
{
	
};
struct Condition
{
	ConditionFoR frameOfReference;
	ConditionExpression expression;
};
struct Conclusion
{

};
struct Theorem
{
	
};
