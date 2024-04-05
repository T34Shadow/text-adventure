#pragma once
#include "Headers.h"
#include "Items.h"

class Rooms
{
public:
	Rooms();

	Rooms(Item& _itemSlot);

	~Rooms();

	Item* item;
	String description;


private:

protected:
};

