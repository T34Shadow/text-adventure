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
	//delete[] spellBook;
}

int Player::GetPlayerXPos()
{
	return xPos;
}
int Player::GetPlayerYPos()
{
	return yPos;
}

void Player::SetPlayerPos(int _xpos, int _ypos)
{
	xPos = _xpos;
	yPos = _ypos;
}

String Player::MovePlayer()
{

	//				<-	X  ->
	//			0		1		2
	// ^	0	room1	room2	room3	
	// Y	1	room4	room5	room6
	// v	2	room7	room8	room9

	//moving the player.
	//1.check to see what direction the player wants to move in.
	//2.check to see if the player is on the edges of the map.
	//2a.if on the edges and wanting to move in a direction that is not available, return 'you cannot move in that direction.'
	//3.if available set the players location, and return 'you have moved in "direction"'.

	String command;
	std::cout << "Where would you like to move." << std::endl;
	command.ReadFromConsole().ToLower();

	//Move North
	if (command.EqualTo("north") == true)
	{
		if (yPos == 0)
		{
			return "You cannot move in that direction, you have hit a wall.";
		}

		else
		{
			SetPlayerPos(xPos, yPos - 1);

			return "You have gone north";
		}
	}
	//Move East
	if (command.EqualTo("east") == true)
	{
		if (xPos == 2)
		{
			return "You cannot move in that direction, you have hit a wall.";
		}
		else
		{
			SetPlayerPos(xPos + 1, yPos);
			return "You have gone east";
		}
	}
	//Move South
	if (command.EqualTo("south") == true)
	{
		if (yPos == 2)
		{
			return "You cannot move in that direction, you have hit a wall.";
		}
		else
		{
			SetPlayerPos(xPos, yPos + 1);
			return "You have gone south";
		}
	}
	//Move West
	if (command.EqualTo("west") == true)
	{
		if (xPos == 0)
		{
			return "You cannot move in that direction, you have hit a wall.";
		}
		else
		{
			SetPlayerPos(xPos - 1, yPos);
			return "You have gone west";
		}
	}
	else
	{
		return  "Invaild Input";
	}
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

Spell* Player::GetSpell(size_t _index)
{
	return spellBook[_index];
}

