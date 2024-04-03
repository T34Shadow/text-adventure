#pragma once
#include "Headers.h"
#include "Items.h"

class Rooms
{
public:

	Rooms();

	Rooms(Item* randItem, String description);

	~Rooms();

	Item* randItem;
	String description;


private:

protected:
};

