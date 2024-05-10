#include "Player.h"


Player::Player()
{
	//Create the new spells and set each name, des, and damage.
	spellBook[0] = new Spell("chill touch", "The target takes 8 hitpoints of necrotic damage. ", 8);
	spellBook[1] = new Spell("eldritch blast", "The target takes 10 hitpoints of force damage. ", 10);
	spellBook[2] = new Spell("frostbite", "The target takes 6 hitpoints of cold damage. ", 6);
	spellBook[3] = new Spell("mind silver", "The target takes 6 hitpoints of psychic damage. ", 6);
	spellBook[4] = new Spell("poison spray", "The target takes 12 hitpoints of poison damage. ", 12);
	spellBook[5] = new Spell("thunderclap", "The target takes 6 hitpoints of thunder damage. ", 6);
}

Player::~Player()
{
	//iterate and delete every spell
	for (int i = 0; i < 6; i++)
	{
		delete spellBook[i];
	}
	delete[] spellBook;
}

void Player::SetPlayerPos(int _xpos, int _ypos)
{
	xPos = _xpos;
	yPos = _ypos;
}

String Player::MovePlayer()
{
	return String();
}

bool Player::FindSpell(String spell)
{
	//player input
	//String.Find
	//Make sure spell list is sorted.
	//Binary search

	//low - start of array
	//high - end of array
	//target - middle of array

	//while loop - low is <= high.
	//if = return true 
	// 
	//if less then change the high to the target 
		//move target to the middle of high and low 
	//if > then change the low to the target +1
		//move target to the middle of high and low
	//else return fales. 

	int low = 0;
	int high = 5;
	int center;

	while (low <= high)
	{

		center = ((high + low) / 2);

		if (spell == spellBook[center]->GetName())
		{
			return true;
		}
		else if (spell < spellBook[center]->GetName())
		{
			high = center - 1;
		}
		else if (spell > spellBook[center]->GetName())
		{
			low = center + 1;
		}

	}
	return false;
}

bool Player::FindItem()
{
	return false;
}
