#pragma once
#include "String.h"

class Spell
{
public:

	Spell(String name, String description, int damge);

	~Spell();

	String GetName();
	String GetDescription();

	void Cast();

private:

	String name;
	String description;
	int damage;
};