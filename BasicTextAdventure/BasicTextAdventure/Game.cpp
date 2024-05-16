#include "Game.h"
#include "Item.h"
#include "Cat.h"
#include "Lamp.h"
#include "Sand.h"
#include "BoxOfSweets.h"

Game::Game()
{
	mainPlayer = new Player;

	mainPlayer->SetPlayerPos(1, 1);

	items = new Item*[9];

	//Making the items 
	Item* item01 = new Cat("Ruby", "This is a cat, it has three legs, poor cat. ");
	Item* item02 = new Lamp("Small lamp", "This is can give off a small amount of light when turned on. ");
	Item* item03 = new Sand("Pile of sand", "It's just sand. ");
	Item* item04 = new BoxOfSweets("Donuts", "This is a small box of donuts, it contains 6 donuts. ");
	
	//Adding the items into a list.
	items[0] = item01; //Ruby
	items[1] = item02; //small lamp
	items[2] = item04; //donuts
	items[3] = item03; //pile of sand
	items[4] = item03; //pile of sand
	items[5] = item03; //pile of sand
	items[6] = item03; //pile of sand
	items[7] = item03; //pile of sand
	items[8] = item03; //pile of sand

	//Making the rooms
	level[0][0] = new Room(*items[0]); //Room01
	level[0][1] = new Room(*items[1]);
	level[0][2] = new Room(*items[2]);
	level[1][0] = new Room(*items[3]);
	level[1][1] = new Room(*items[4]);
	level[1][2] = new Room(*items[5]);
	level[2][0] = new Room(*items[6]);
	level[2][1] = new Room(*items[7]);
	level[2][2] = new Room(*items[8]); //Room09

	//Add descriptions to each room.
	level[0][0]->SetDescription("In this room there are weapon racks with rusty old swords, spears, and battle axes, with rooms to the south and east.");
	level[0][1]->SetDescription("This is a mess hall.To the north, east and south are more rooms.");
	level[0][2]->SetDescription("This room has cooking equipment, and areas to prepare food. To the north, and east are more rooms.");
	level[1][0]->SetDescription("This is just a T-intersection that connects rooms to the west, east and south.");
	level[1][1]->SetDescription("This is the entrance of the dungeon, a tall square room that has a set of stairs in the centre. To the north, east, south and west are more rooms.");
	level[1][2]->SetDescription("This room is rather large with lots of space, and lots of sand. To the north, east, and west are more rooms.");
	level[2][0]->SetDescription("This room looks like it was made for an alchemist. To the west and south are more rooms.");
	level[2][1]->SetDescription("This is a very small room with nothing in it but more and more sand. To the north, south and west are more rooms.");
	level[2][2]->SetDescription("This room looks like it might have contained gold coins, gems, and even rare artifacts, but now its empty. To the north and west are more rooms. ");

}

Game::~Game()
{
	//iterate and delete every room.
	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			delete level[x][y];
		}
	}
	delete[] level;


	//delete the player 
	delete mainPlayer;


	//iterate and delete every item.
	for (int i = 0; i < 9; i++)
	{
		delete items[i];
	}
	delete[] items;
}

void Game::Run()
{

	//				<-	X  ->
	//			0		1		2
	// ^	0	room1	room2	room3	
	// Y	1	room4	room5	room6
	// v	2	room7	room8	room9

	
	std::cout << "You have entred into a dungeon." << std::endl;

	bool gameState = true;
	
	//items[0]->GetDescription().WriteToConsole();


	while (gameState) //start gameplay loop.
	{

		int xPos = mainPlayer->GetPlayerXPos();
		int yPos = mainPlayer->GetPlayerYPos();

		std::cout << std::endl;

		std::cout << "Available actions:" << std::endl;
		std::cout << "Move" << std::endl;
		std::cout << "Open spellbook" << std::endl;
		std::cout << "Find item" << std::endl;

		std::cout << std::endl;
		level[xPos][yPos]->GetDescription().WriteToConsole();
		std::cout << std::endl;

		std::cout << "There is an item in this room"; // There is an item in everyroom
		std::cout << std::endl;

		bool playerActions = true;

		while (playerActions) //start player input loop.
		{
			String playerInput;
			playerInput.ReadFromConsole().ToLower();

			//Spellbook - Find Spell
			if (playerInput == "open spellbook")
			{
				std::cout << "You have opened your spellbook, what spell would you like to find." << std::endl;

					//loop to display the spells.
					for (int i = 0; i < 6; i++)
					{
						
						mainPlayer->GetSpell(i)->GetName().WriteToConsole();
						std::cout << std::endl;
					}
				
				//what spell is the player finding.
				String spellName;
				spellName.ReadFromConsole().ToLower();
				//mainPlayer->FindSpell(spellName);

				if (mainPlayer->FindSpell(spellName) == true) //find spell - Binary search
				{
					std::cout << "You have found the spell: ";
					spellName.WriteToConsole();
					std::cout << std::endl;
				}
				else
				{
					std::cout << "Did not find any spell" << std::endl;
				}

			}
			//Find Item - Use item
			else if (playerInput == "find item")
			{
				if (level[xPos][yPos]->GetItem() != nullptr)
				{

					std::cout << "Item Name: ";
					level[xPos][yPos]->GetItem()->GetName().WriteToConsole(); //Name of item in the currnet room.
					std::cout << std::endl;
					std::cout << "Item Description:";
					level[xPos][yPos]->GetItem()->GetDescription().WriteToConsole(); // description of item in the currnet room.
					std::cout << std::endl;
					std::cout << "Item command:"; //Asking for player use input.
					String itemInput;
					itemInput.ReadFromConsole().ToLower();
					if (itemInput == "use")
					{
						level[xPos][yPos]->GetItem()->Use(); //direction to the function for useing the item - overide.
					}
					std::cout << std::endl;
				}
				else
				{
					std::cout << "No item found" << std::endl;
				}

			}
			else if (playerInput == "move")
			{
				playerActions = false;
				mainPlayer->MovePlayer().WriteToConsole(); // move the player function - update pos.

			}
			else if (playerInput == "quit") //ends the gameplay loop, and player actions loop.
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

