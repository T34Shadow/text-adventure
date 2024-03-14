#pragma once
#include "Headers.h"
#include "Game.h"
#include "Items.h"
class Lamp : public Item
{
public:
	Lamp();
	Lamp(String name, String description);
	~Lamp();
	void Use() override;


private:

};
