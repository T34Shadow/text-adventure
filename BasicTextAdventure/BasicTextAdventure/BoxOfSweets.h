#pragma once

#include "Item.h"

class BoxOfSweets : public Item
{
public:

	BoxOfSweets();
	BoxOfSweets(String _name);
	BoxOfSweets(String _name, String _description);

	String GetName() override;
	String GetDescription() override;

	void SetDescription(String _other) override;
	void Use() override;

private:

	String name;
	String description;

	int count;
};