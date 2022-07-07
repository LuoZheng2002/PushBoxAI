#pragma once
#include"GameEnums.h"
#include"CommonIncludes.h"
class _ElementValue
{
public:
	_ElementValue();
private:
	bool duplicated;
	ElementType type;
	void* mainValue;
	void* subValue;
};
class _ArraySubElementValue
{
public:
	_ArraySubElementValue();
private:
	ElementType type;
	void* value;
};
class _VectorValue
{
public:
	_VectorValue();
private:
	vector<int> value;
};
class _ArrayElementValue
{
public:
	_ArrayElementValue();
private:
	map<string, _ArraySubElementValue> value;
};
class _ArrayValue
{
public:
	_ArrayValue();
private:
	map<uint, _ArrayElementValue> arrayValue;
};
class Chessboard
{
public:
	Chessboard() = default;
	void SetTurn(WhoseTurn whoseTurn);
	void PushValue(const string& name, ElementType type, bool duplicated, void* elementValue, void* secondElementValue);
private:
	map<string, _ElementValue> values;
	WhoseTurn whoseTurn = WhoseTurn::MyTurn;
};