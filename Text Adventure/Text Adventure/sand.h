#pragma once

#include "Headers.h"
#include "Game.h"
#include "Items.h"
class sand : public Item
{
public:
	sand();
	sand(String name, String description);
	~sand();
	void Use() override;
	void Use(String _playerInput) override;


private:

};
