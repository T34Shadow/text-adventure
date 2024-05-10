#pragma once
#include"Spell.h"
class Player
{
public:

	Player();

	~Player();

	void SetPlayerPos(int _xpos, int _ypos);
	
	String MovePlayer();
	bool FindSpell(String spell);
	bool FindItem();


private:

	Spell* spellBook[6];
	int xPos;
	int yPos;
};