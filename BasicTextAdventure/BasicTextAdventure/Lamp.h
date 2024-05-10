#pragma once

#include "Item.h"

class Lamp : public Item
{
public:

	Lamp();
	Lamp(String _name);
	Lamp(String _name, String _description);

	String GetName() override;
	String GetDescription() override;

	void SetDescription(String _other) override;
	void Use() override;

private:

	String name;
	String description;

	bool lightSwitch;
};