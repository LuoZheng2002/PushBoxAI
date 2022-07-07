#pragma once
#include"CommonIncludes.h"
#include"GameEnums.h"
struct SubElementLayout
{
	ElementType type;
	const char* name;
	uint vectorLength;
};
struct ArrayLayout
{
	uint subElementCount;
	SubElementLayout* pSubElementLayouts;
	int arrayFlag;
};
struct ElementLayout
{
	ElementType type;
	const char* name;
	// If two players share the same form of a variable,
	// for example, chess pieces, then this variable should be duplicated.
	// You can then access the duplicated variable by specifying the owner (mine or opponent's)
	bool duplicate;
	ArrayLayout* pArrayLayout;//This parameter is only needed when element type is array. Otherwise set it to nullptr
	uint vectorLength;
};
struct ChessboardLayout
{
	uint elementCount;
	ElementLayout* pElementLayouts;
};