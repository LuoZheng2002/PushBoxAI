#pragma once
#include"Game.h"
class GameAI
{
public:
	GameAI(const Game& game);
	void Run();
private:
	Game game;


};

