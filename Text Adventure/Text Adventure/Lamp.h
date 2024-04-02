#pragma once
#include "Game.h"
#include "Headers.h"
#include "Items.h"
class Lamp : public Item
{
public:
	Lamp();
	Lamp(String name, String description);
	~Lamp();
	void Use(String _playerInput) override;
	


private:

};
