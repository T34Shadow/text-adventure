//required is:
//Player name.
//spell list <string>
//FindSpell

#include "Player.h"

Player::Player()
{
	playerSpellBook[0] = new Spells("chill touch. ", "The target takes 8 hitpoints of necrotic damage. ", 8);
	playerSpellBook[1] = new Spells("eldritch blast. ", "The target takes 10 hitpoints of force damage. ", 10);
	playerSpellBook[2] = new Spells("frostbite. ", "The target takes 6 hitpoints of cold damage. ", 6);
	playerSpellBook[3] = new Spells("mind silver. ", "The target takes 6 hitpoints of psychic damage. ", 6);
	playerSpellBook[4] = new Spells("poison spray. ", "The target takes 12 hitpoints of poison damage. ", 12);
	playerSpellBook[5] = new Spells("thunderclap. ", "The target takes 6 hitpoints of thunder damage. ", 6);
}

Player::~Player()
{
}

int Player::setPlayerLocation(int _xpos, int _ypos)
{
	xpos = _xpos;
	ypos = _ypos;

	return xpos, ypos;
}

//void Player::getPlayerLocation()
//{
//	
//}

bool Player::FindSpell(String spell)
{
	//player input
	//String.Find
	//Make sure spell list is sorted.
	//Binary search

	//if ()
	//{
	//	return true;
	//}
	//if ()
	//{
	return false;

	//}
}

String Player::MovePlayer(String _playerInput)
{

	//		0		1		2
	//	0	room1	room2	room3	
	//	1	room4	room5	room6
	//	2	room7	room8	room9

	//get player location.what room are we in.
	//can the player move in that direcation.
	//if true move player to new location.
	//if false dont move, and contuine.
	
	//check to see where we are moving is valueed 

	//Move North
	if (xpos == 0)
	{
		return "You cannot move in that direction";
	}

	else if (_playerInput.ToLower().EqualTo("move north") == true)
	{
		setPlayerLocation(xpos, ypos - 1);
	
		return "You have gone north";
	}

	
	
	//Move East
	if (ypos == 2)
	{
		return "You cannot move in that direction";
	}
	else if (_playerInput.ToLower().EqualTo("move east") == true)
	{
		setPlayerLocation(xpos + 1, ypos);
	}

	//Move South
	if (xpos == 2)
	{
		return "You cannot move in that direction";
	}
	else if (_playerInput.ToLower().EqualTo("move south") == true)
	{
		setPlayerLocation(xpos, ypos + 1);
	}

	//Move West
	if (ypos == 0)
	{
		return "You cannot move in that direction";
	}
	else if (_playerInput.ToLower().EqualTo("move west") == true)
	{
		setPlayerLocation(xpos - 1, ypos);
	}
}



