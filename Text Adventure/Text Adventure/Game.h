#pragma once
#include "Headers.h"
#include "Player.h"
#include "Rooms.h"
class Game
{

public:

	Game();
	

	~Game();

	Player* mainPlayer;
	Rooms* dungeon[3][3];
	
	

private:

protected:
};
