#pragma once

#include "Item.h"

class Lamp : public Item
{
public:

	Lamp();
	Lamp(String _name);
	Lamp(String _name, String _description);

	void Use() override;

private:

	bool lightSwitch;
};