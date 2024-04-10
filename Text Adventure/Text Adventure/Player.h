#pragma once
#include "Headers.h"
#include "Spells.h"

class Player
{
public:
	
	Player();

	~Player();

	void setPlayerLocation(int _xpos, int _ypos);

	String MovePlayer();
	
	bool FindSpell(String spell);

	//Player location.
	int xpos = 0;
	int ypos = 0;

	Spells* playerSpellBook[6];

	

private:
	

protected:
};
