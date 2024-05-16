#include "Room.h"

Room::Room()
{
}

Room::Room(Item& _itemSlot)
{
	item = &_itemSlot;
}

Room::~Room()
{
}

void Room::SetDescription(String _other)
{
	description = _other;
}

String Room::GetDescription()
{
	return description;
}

Item* Room::GetItem()
{
	return item;
}
