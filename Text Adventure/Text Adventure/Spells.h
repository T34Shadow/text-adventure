#pragma once
#include "Headers.h"

class Spells
{
public:
	Spells();

	Spells(String name, String description, int damage);
	
	~Spells();

	String name;
	String description;
	int damage;

private:

protected:
};

