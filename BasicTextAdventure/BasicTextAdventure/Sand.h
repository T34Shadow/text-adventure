#pragma once

#include "Item.h"

class Sand : public Item
{
public:

	Sand();
	Sand(String _name);
	Sand(String _name, String _description);

	String GetName() override;
	String GetDescription() override;

	void SetDescription(String _other) override;
	void Use() override;

private:

	String name;
	String description;

	int amout;
};