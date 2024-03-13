#pragma once
#include "Headers.h"

class Item
{
public:
	Item();
	Item(const char* _item);
	~Item();

public:
	String name;
	String description;
	virtual void use() const = 0;

private:

	char* item;

};


