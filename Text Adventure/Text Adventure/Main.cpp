

#include "Player.h"
#include "Items.h"
#include "Rooms.h"
#include "Headers.h"
#include "Game.h"




int main()
{
	Game* textAdventure = new Game;
	
	textAdventure->mainPlayer->setPlayerLocation(1,1);

	//				<-	X  ->
	//			0		1		2
	// ^	0	room1	room2	room3	
	// Y	1	room4	room5	room6
	// v	2	room7	room8	room9

	//int currentXpos = textAdventure->mainPlayer->xpos;
	//int currentYpos = textAdventure->mainPlayer->ypos;
	
	std::cout << "You have entred into a dungeon." << std::endl;
	bool gameState = true;

	while (gameState)
	{
		std::cout << std::endl;
		textAdventure->dungeon[textAdventure->mainPlayer->xpos][textAdventure->mainPlayer->ypos]->description.WriteToConsole(std::cout); //description for the room.
		std::cout << std::endl;

		std::cout << "There is an item in this room, it is a ";
		textAdventure->dungeon[textAdventure->mainPlayer->xpos][textAdventure->mainPlayer->ypos]->item->name.WriteToConsole(std::cout); //Name of item.
		textAdventure->dungeon[textAdventure->mainPlayer->xpos][textAdventure->mainPlayer->ypos]->item->description.WriteToConsole(std::cout); // description of item.

		String _playerInput;
		_playerInput.ReadFromConsole();
		textAdventure->dungeon[textAdventure->mainPlayer->xpos][textAdventure->mainPlayer->ypos]->item->Use(_playerInput.ToLower());

		std::cout << std::endl;
		textAdventure->mainPlayer->MovePlayer().WriteToConsole(std::cout); // move the playe function.
		std::cout << std::endl;

		system("CLS");

	}
	




	
}