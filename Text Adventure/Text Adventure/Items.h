#pragma once
#include "Headers.h"

class Item
{
public:

	Item();
	Item(String name, String description);
	~Item();

public:

	String name;
	String description;
	
	void Use();
	

private:

	char* item;

	
};


