#include "Spell.h"

Spell::Spell(String _name, String _description, int _damage)
{
	name = _name;
	description = _description;
	damage = _damage;
}

Spell::~Spell()
{
}

String Spell::GetName()
{
	return name;
}

String Spell::GetDescription()
{
	return description;
}

void Spell::Cast()
{
	std::cout << "You cast ";
	GetName().WriteToConsole();
	std::cout << " ";
	GetDescription().WriteToConsole();
}
