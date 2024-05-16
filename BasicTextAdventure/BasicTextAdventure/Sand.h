#pragma once

#include "Item.h"

class Sand : public Item
{
public:

	Sand();
	Sand(String _name);
	Sand(String _name, String _description);

	void Use() override;

private:

};