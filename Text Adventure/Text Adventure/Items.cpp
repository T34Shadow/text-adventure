//required is:
//Items within the game.
//
//Name of item
//Description of the item
//Use() void
#include "Headers.h"
#include "Items.h"

Item::Item() //defualt constructor 
	: item(nullptr)
{
	item = new char[1] {'\0'};
}

Item::Item(String _name, String _description)//basic constructor
	:item(nullptr)
{	
	name = _name;
	description = _description;
}

Item::~Item()//Destructor
{
	delete[] item;
}

void Item::Use(){}



//Lamp
// turnOn: bool
//	-Torch()
//	-Descripiton() const void
//	-Use() void

//BoxOfSweets
// countL: int
//	-BoxOfSweets()
//	-Descripiton() const void
//	-Use() void

//Cat
// purring: bool
//	-Cat()
//	-Descripiton() const void
//	-Use() void