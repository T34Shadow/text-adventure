#pragma once

#include "Item.h"

class BoxOfSweets : public Item
{
public:

	BoxOfSweets();
	BoxOfSweets(String _name);
	BoxOfSweets(String _name, String _description);

	void Use() override;

private:

	int count;
};