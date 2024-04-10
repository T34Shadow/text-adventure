//required is:
//Items within the game.
//
//Name of item
//Description of the item
//Use() void
#include "Headers.h"
#include "Items.h"

Item::Item() //defualt constructor 
{

}

Item::Item(String _name, String _description)//basic constructor

{	
	name = _name;
	description = _description;

}

Item::~Item()//Destructor
{
	
}

void Item::Use()
{

}
void Item::Use(String _playerInput)
{

}