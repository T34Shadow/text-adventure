#pragma once
#include "Player.h"
#include "Room.h"
class Game
{

public:

	Game();
	~Game();

	void Run();
	void SetStartPos(int _xpos, int _ypos);

private:

	Player* mainPlayer = new Player;
	Room* dungeon[3][3];
	Item** items;

};