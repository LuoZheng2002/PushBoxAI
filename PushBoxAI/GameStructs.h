#pragma once
#include"GameEnums.h"
#include"Statement.h"
#include"CommonIncludes.h"
#include"Chessboard.h"
struct SubElementLayout
{
	ElementType type;
	char* name;
};
struct ArrayLayout
{
	uint subElementCount;
	SubElementLayout* pSubElementLayouts;
	ArrayFlag arrayFlag;
};
struct ElementLayout
{
	ElementType type;
	char* name;
	// If two players share the same form of a variable,
	// for example, chess pieces, then this variable should be duplicated.
	// You can then access the duplicated variable by specifying the owner (mine or opponent's)
	bool duplicate;
	ArrayLayout* pArrayLayout;//This parameter is only needed when element type is array. Otherwise set it to nullptr
};
struct ChessboardLayout
{
	uint elementCount;
	ElementLayout* pElementLayouts;

	int leftBorder;
	int rightBorder;
	int topBorder;
	int bottomBorder;
};
struct ScalarValue
{
	int value;
};
struct VectorValue
{
	uint elementCount;
	int* pValues;
};
struct ArrayValue
{
	char* name;
	uint elementCount;
	ElementValue* pElementValues;
};
struct ElementValue
{
	ElementType type;
	char* name; //This parameter should be consistent with that in ChessboardLayout and variables' sequence cannot be changed.
	bool duplicated; //This parameter should be consistent with that in ChessboardLayout.
	uint valueStructCount; // If duplicated is set to true, then this must be 2, otherwise 1.
	void* pValueStruct1; //If duplicated is set to false, this param points to the only struct, otherwise the one owned by you
	void* pValueStruct2;//If duplicated is set to true, this param points to the struct owned by opponent. Otherwise, set it to nullptr.
};
struct ChessboardStatus
{
	uint elementCount;
	ElementValue* pElementValues;
};
struct EndGameIndicatorInfo
{
	BooleanStatement* pEndGameIndicatorStatement;
};
struct EndGameBenefitInfo
{
	BenefitType type;
	void* pStatement;
};
typedef Chessboard(*PFNOperation)(const Chessboard* pChessboard, Player player, const vector<int>& parameters);
typedef Chessboard(*PFNSystemOperation)(const Chessboard* pChessboard, const std::map<string, int>& signals);
struct OperationInfo
{
	uint referencedVariableCount;
	char** pReferencedVariableNames;
	uint changedVariableCount;
	char** pChangedVariableNames;
	PFNOperation operationFunc;
	uint parameterCount;
	uint* parameterLimits;

	uint signalCount;
	char** signalNames;
};

struct SystemOperationInfo
{
	uint referencedVariableCount;
	char** pReferencedVariableNames;
	uint changedVariableCount;
	char** pChangedVariableNames;
	PFNSystemOperation systemOperationFunc;
};

struct OperationSetInfo
{
	uint operationCount;
	OperationInfo* pOperationInfos;
	SystemOperationInfo* pSystemOperationInfo;
};

struct GameCreateInfo
{
	char* gameName;
	ChessboardLayout* pChessboardLayout;
	ChessboardStatus* pChessboardStatus;
	EndGameBenefitInfo* pEndGameBenefitInfo;
	OperationSetInfo* pOperationSetInfo;
	bool allowPass;
	WhoseTurn whoseTurn;
};