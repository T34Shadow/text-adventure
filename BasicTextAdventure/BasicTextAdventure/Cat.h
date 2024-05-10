#pragma once

#include "Item.h"

class Cat : public Item
{
public:

	Cat();
	Cat(String _name);
	Cat(String _name,String _description);
	
	String GetName() override;
	String GetDescription() override;

	void SetDescription(String _other) override;
	void Use() override;

private:

	String name;
	String description;

	bool purring;
};