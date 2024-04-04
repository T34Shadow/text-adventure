#pragma once
#include "Headers.h"
#include "Spells.h"

class Player
{
public:
	
	Player();

	~Player();

	//player 

	int setPlayerLocation(int _xpos, int _ypos);
	//void getPlayerLocation();

	bool FindSpell(String spell);

	String MovePlayer(String _playerInput);

	//Player location.
	int xpos = 0;
	int ypos = 0;

	Spells* playerSpellBook[6];

	

private:
	

protected:
};
