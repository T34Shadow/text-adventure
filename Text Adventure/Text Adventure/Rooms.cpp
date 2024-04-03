//required is:
//What items are in the room.
//Room description

//Room con
//Room des

#include "Rooms.h"

Rooms::Rooms()
{

}
Rooms::Rooms(Item* _randItem, String _description)
{
	randItem = _randItem;
	description = _description;
}

Rooms::~Rooms()
{

}