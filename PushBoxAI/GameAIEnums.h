#pragma once
enum class FrameOfReference
{
	Object,
	Tile,
	Global
};
enum class GameAIBooleanExpressionType
{
	And,
	Or,
	Exist_B_in_A_st_C_in_B_WRT_D,
};


enum class GameAIElementPtrType
{
	Specified,
	GameAITheoremGlobal,
	//...
};