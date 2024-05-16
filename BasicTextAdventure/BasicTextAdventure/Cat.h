#pragma once

#include "Item.h"

class Cat : public Item
{
public:

	Cat();
	Cat(String _name);
	Cat(String _name,String _description);
	
	void Use() override;

private:

	bool purring;
};