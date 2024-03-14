#include "Headers.h"
#include "Game.h"
#include "Items.h"
#include "Lamp.h"


int main()
{
	Item* item01 = new Lamp("Lamp", "The lamp gives off a dim lighting.");

	//Item* item02 = new Item("Box of sweets", "This is a box of sweets with 6 donuts.");

	item01->name.WriteToConsole(std::cout);
	//item02->name.WriteToConsole(std::cout);

	
}