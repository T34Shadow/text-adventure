//required is:
//Array of room to display the map.
//pointer to the player, location.

#include "Items.h"
#include "Game.h"
#include "Lamp.h"
#include "BoxOfSweets.h"
#include "Cat.h"
#include "sand.h"

Game::Game()
{

	mainPlayer = new Player;

	//Items
	Item** collectionItems = new Item*[9];

	Item* item00 = new Cat("Ruby", " This is a white cat, it has 3 legs, poor cat. ");
	Item* item01 = new Lamp("Lamp", " This is a small lamp that lights up the area around it when on. ");
	Item* item02 = new BoxOfSweets(" Box of Donuts", "This is a small box of donuts, it contains 6 donuts. ");
	Item* item03 = new sand("Pile of Sand", "It's just sand. ");
	Item* item04 = new Cat("LEGS", " This is a large cat that has 7 legs, 3 eyes, and no ears. Poor cat. ");

	collectionItems[0] = item03; //sand
	collectionItems[1] = item00; //cat ruby
	collectionItems[2] = item02; //box of sweets
	collectionItems[3] = item03; //sand
	collectionItems[4] = item01; //lamp
	collectionItems[5] = item03; //sand
	collectionItems[6] = item04; //cat legs
	collectionItems[7] = item03; //sand 
	collectionItems[8] = item03; //sand

	//make rooms for a 3x3 map.
	//	    x  y
	dungeon[0][0] = new Rooms(*collectionItems[0]); //Room01
	dungeon[0][1] = new Rooms(*collectionItems[1]);
	dungeon[0][2] = new Rooms(*collectionItems[2]);
	dungeon[1][0] = new Rooms(*collectionItems[3]);
	dungeon[1][1] = new Rooms(*collectionItems[4]);
	dungeon[1][2] = new Rooms(*collectionItems[5]);
	dungeon[2][0] = new Rooms(*collectionItems[6]);
	dungeon[2][1] = new Rooms(*collectionItems[7]);
	dungeon[2][2] = new Rooms(*collectionItems[8]); //Room09
	
	//				<-	X  ->
	//			0		1		2
	// ^	0	room1	room2	room3	
	// Y	1	room4	room5	room6
	// v	2	room7	room8	room9

	//Add descriptions to each room.
	//		x  y
	dungeon[0][0]->description = ("In this room there are weapon racks with rusty old swords, spears, and battle axes, with rooms to the south and east.");
	dungeon[0][1]->description = ("This is a mess hall.To the north, east and south are more rooms.");
	dungeon[0][2]->description = ("This room has cooking equipment, and areas to prepare food. To the north, and east are more rooms.");
	dungeon[1][0]->description = ("This is just a T-intersection that connects rooms to the west, east and south.");
	dungeon[1][1]->description = ("This is the entrance of the dungeon, a tall square room that has a set of stairs in the centre. To the north, east, south and west are more rooms.");
	dungeon[1][2]->description = ("This room is rather large with lots of space, and lots of sand. To the north, east, and west are more rooms.");
	dungeon[2][0]->description = ("This room looks like it was made for an alchemist. To the west and south are more rooms.");
	dungeon[2][1]->description = ("This is a very small room with nothing in it but more and more sand. To the north, south and west are more rooms.");
	dungeon[2][2]->description = ("This room looks like it might have contained gold coins, gems, and even rare artifacts, but now its empty. To the north and west are more rooms. ");
}

Game::~Game()
{
}
