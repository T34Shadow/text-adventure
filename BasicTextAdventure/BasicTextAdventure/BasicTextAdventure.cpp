#include "Game.h"

int main()
{
	Game* textAdventure = new Game;

	textAdventure->SetStartPos(1,1);
		
	textAdventure->Run();
}