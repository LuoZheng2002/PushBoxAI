#pragma once
#include"GameChessboard.h"
#include"GameChessboardLayout.h"
#include"GameChessboardValues.h"
#include"GameOperations.h"
#include"GameStatements.h"

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


typedef Chessboard(*PFNOperation)(const Chessboard* pChessboard,
	Player player, const vector<int>& parameters);

typedef Chessboard(*PFNSystemOperation)(const Chessboard* pChessboard,
	const map<string, int>& signals);



struct GameCreateInfo
{
	const char* gameName;
	ChessboardLayout* pChessboardLayout;
	ChessboardStatus* pChessboardStatus;
	EndGameIndicatorInfo* pEndGameIndicatorInfo;
	EndGameBenefitInfo* pEndGameBenefitInfo;
	OperationSetInfo* pOperationSetInfo;
	bool allowPass;
	WhoseTurn whoseTurn;
};