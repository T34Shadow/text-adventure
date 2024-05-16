#pragma once
#include"Spell.h"
class Player
{
public:

	Player();

	~Player();
	int GetPlayerXPos();
	int GetPlayerYPos();
	void SetPlayerPos(int _xpos, int _ypos);
	
	String MovePlayer();
	bool FindSpell(String spell);

	Spell* GetSpell(size_t _index);
	
private:

	Spell* spellBook[6];
	int xPos;
	int yPos;
};