#pragma once
#include"CommonIncludes.h"
#include"GameStructs.h"
#include"Chessboard.h"
class _SubElementLayout
{
public:
	_SubElementLayout();
private:
	ElementType type;
};
class _ArrayLayout
{
public:
	_ArrayLayout();
private:
	map<string, _SubElementLayout> subElementLayouts;
	ArrayFlag arrayFlag;
};
class _ElementLayout
{
public:
	_ElementLayout();
private:
	ElementType type;
	bool duplicate;
	ArrayLayout arrayLayout;
};
class _ChessboardLayout
{
public:
	_ChessboardLayout();
private:
	map<string, _ElementLayout> elementLayouts;
};


class Game
{
public:
	Game() = default;
	void ConfigureGameInfo(GameCreateInfo* pInfo);
	void Print() const;
private:
	_ChessboardLayout chessboardLayout;
	Chessboard chessboard;
};

