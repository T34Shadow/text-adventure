#pragma once
#include "Player.h"
#include "Room.h"
class Game
{

public:

	Game();
	~Game();

	void Run();
	

private:

	Player* mainPlayer;
	Room* level[3][3];
	Item** items;

};