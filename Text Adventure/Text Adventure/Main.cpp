

#include "Player.h"
#include "Items.h"
#include "Rooms.h"
#include "Headers.h"
#include "Game.h"

int main()
{
	Game* textAdventure = new Game; // Make a new game object.
	
	textAdventure->mainPlayer->setPlayerLocation(1,1); //set player location.

	//				<-	X  ->
	//			0		1		2
	// ^	0	room1	room2	room3	
	// Y	1	room4	room5	room6
	// v	2	room7	room8	room9
		
	std::cout << "You have entred into a dungeon." << std::endl;
	bool gameState = true;

	while (gameState) //start gameplay loop.
	{
		//get play loc.
		int xPos = textAdventure->mainPlayer->xpos;
		int yPos = textAdventure->mainPlayer->ypos;

		std::cout << std::endl;
		
		std::cout << "Available actions:" << std::endl;
		std::cout << "Move" << std::endl;
		std::cout << "Open spellbook" << std::endl;
		std::cout << "Find item" << std::endl;

		std::cout << std::endl;
		textAdventure->dungeon[xPos][yPos]->description.WriteToConsole(std::cout); //description of the room.
		std::cout << std::endl;

		std::cout << "There is an item in this room"; // There is an item in everyroom
		std::cout << std::endl;
		
		bool playerActions = true;

		while (playerActions) //start player input loop.
		{
			//PlayerInput - is it move, find spell or find item.
			String _playerInput;
			_playerInput.ReadFromConsole().ToLower();

			//Spellbook - Find Spell
			if (_playerInput == "open spellbook")
			{
				std::cout << "You have opened your spellbook, what spell would you like to find." << std::endl;
			
				//	//loop to display the spells.
				//	for (int i = 0; i < 6; i++)
				//	{
				//		textAdventure->mainPlayer->playerSpellBook[i]->name.WriteToConsole(std::cout);
				//		std::cout << std::endl;
				//	}
				//what spell is the player finding.
				String spellName;
				spellName.ReadFromConsole().ToLower();
				textAdventure->mainPlayer->FindSpell(spellName);

				if (textAdventure->mainPlayer->FindSpell(spellName) == true) //find spell - Binary search
				{
					std::cout << "You have found the spell: ";
					spellName.WriteToConsole(std::cout);
					std::cout << std::endl;
				}
				else
				{
					std::cout << "Did not find any spell" << std::endl;
				}

			}
			//Find Item - Use item
			else if (_playerInput == "find item")
			{
				std::cout << "Item Name: ";
				textAdventure->dungeon[xPos][yPos]->item->name.WriteToConsole(std::cout); //Name of item in the currnet room.
				std::cout << std::endl;
				std::cout << "Item Description:";
				textAdventure->dungeon[xPos][yPos]->item->description.WriteToConsole(std::cout); // description of item in the currnet room.
				std::cout << std::endl;
				std::cout << "Item command:"; //Asking for player use input.
				String itemInput;
				itemInput.ReadFromConsole().ToLower();

				if (itemInput == "use")
				{
				textAdventure->dungeon[xPos][yPos]->item->Use(itemInput.ToLower()); //direction to the function for useing the item - overide.
				}
				std::cout << std::endl;
			}
			else if(_playerInput == "move")
			{
				playerActions = false;
				textAdventure->mainPlayer->MovePlayer().WriteToConsole(std::cout); // move the player function - update pos.

			}
			else if (_playerInput == "quit") //ends the gameplay loop, and player actions loop.
			{
				playerActions = false;
				gameState = false;
			}
			std::cout << std::endl;
			std::cout << "New action: " << std::endl;
			std::cout << std::endl;
		}
		std::cout << "Press Enter to continue." << std::endl;
		std::cin.get();
		system("CLS"); //Clear screen.
	}
	




	
}