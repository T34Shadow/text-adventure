//required is:
//What items are in the room.
//Room description


#include "Rooms.h"
#include "Lamp.h"
#include "BoxOfSweets.h"
#include "Cat.h"


Rooms::Rooms()
{
	//gen random item

	Item* item01 = new Cat("Ruby. ", "This is a white cat, it has 3 legs. ");
	Item* item02 = new Lamp("Lamp. ", "This is a small lamp that lights up the area around it. ");
	Item* item03 = new BoxOfSweets("Box of Donuts. ", "This is a small box of donuts, it contains 6 donuts. ");

	

	item = item01;

}


Rooms::~Rooms()
{

}