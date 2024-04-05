#pragma once

#include "Headers.h"
#include "Game.h"
#include "Items.h"
class Cat : public Item
{
public:
	Cat();
	Cat(String name, String description);
	~Cat();
	void Use(String _playerInput)override;
	void Use() override;


private:

};
