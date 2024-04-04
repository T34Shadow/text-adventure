//required is:
//Array of room to display the map.
//pointer to the player, location.

#include "Items.h"
#include "Game.h"

Game::Game()
{
	mainPlayer = new Player;

	//	  x  y
	dungeon[0][0] = new Rooms; //Room01
	dungeon[0][1] = new Rooms; 
	dungeon[0][2] = new Rooms; 
	dungeon[1][0] = new Rooms; 
	dungeon[1][1] = new Rooms; 
	dungeon[1][2] = new Rooms; 
	dungeon[2][0] = new Rooms; 
	dungeon[2][1] = new Rooms; 
	dungeon[2][2] = new Rooms; //Room09
	
	dungeon[0][0]->description = ("");
	dungeon[0][1]->description = ("");
	dungeon[0][2]->description = ("");
	dungeon[1][0]->description = ("");
	dungeon[1][1]->description = ("");
	dungeon[1][2]->description = ("");
	dungeon[2][0]->description = ("");
	dungeon[2][1]->description = ("");
	dungeon[2][2]->description = ("");

}

Game::~Game()
{
}
