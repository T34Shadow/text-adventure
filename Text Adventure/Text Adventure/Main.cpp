

#include "Player.h"
#include "Items.h"
#include "Rooms.h"
#include "Headers.h"
#include "Game.h"




int main()
{
	Game* textAdventure = new Game;
	
	textAdventure->mainPlayer->setPlayerLocation(0,0);
	
	String command;
	
	command.ReadFromConsole();
	textAdventure->mainPlayer->MovePlayer(command).WriteToConsole(std::cout);

	//textAdventure->~Game();
	
}