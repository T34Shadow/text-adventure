//required is:
//What items are in the room.
//Room description


#include "Rooms.h"

Rooms::Rooms()
{
}

Rooms::Rooms(Item& _itemSlot)
{
	item = &_itemSlot;
}


Rooms::~Rooms()
{
	//delete itme
}



