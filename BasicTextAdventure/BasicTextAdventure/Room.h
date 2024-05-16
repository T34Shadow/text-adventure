#pragma once
#include "Item.h"
class Room
{
public:

	Room();

	Room(Item& _itemSlot);

	~Room();
	void SetDescription(String _other);
	String GetDescription();

	Item* GetItem();

private:

	Item* item;
	String description;
};