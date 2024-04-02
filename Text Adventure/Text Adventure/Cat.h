#pragma once
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
	void Use() override;


private:

};
