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

Item::Item(const char* _item)//basic constructor
	:item(nullptr)
{	
	std::size_t StringLength = std::strlen(_item) + 1;
	item = new char[StringLength];
	std::strncpy(item, _item, StringLength);
}

Item::~Item()//Destructor
{
	delete[] item;
}




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