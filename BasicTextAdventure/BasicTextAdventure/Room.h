#pragma once
#include "Item.h"
class Room
{
public:

	Room();

	~Room();

	String GetDescription();

private:

	Item* item;
	String description;
};