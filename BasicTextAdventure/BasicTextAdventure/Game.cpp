#include "Game.h"
#include "Item.h"
#include "Cat.h"

Game::Game()
{
	Item* item01 = new Cat("Ruby", "This is a cat, it has three legs, poor cat");
	
}

Game::~Game()
{
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

	while (gameState) //start gameplay loop.
	{

	}
	
}

void Game::SetStartPos(int _xpos, int _ypos)
{
	mainPlayer->SetPlayerPos(_xpos, _ypos);
}
