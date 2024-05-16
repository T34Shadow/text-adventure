#pragma once
#include "String.h"

class Item
{
public:

	Item();

	Item(String _name);
	
	Item(String _name, String _description);

	~Item();

	String GetName();
	String GetDescription();

	void SetDescription(String _other);

	virtual void Use() =0;

protected:

	String name;
	String description;


};