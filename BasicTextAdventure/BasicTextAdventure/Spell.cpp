#include "Spell.h"

Spell::Spell(String name, String description, int damge)
{
}

Spell::~Spell()
{
}

String Spell::GetName()
{
	return name->CStr();
}

String Spell::GetDescription()
{
	return description->CStr();
}

void Spell::Cast()
{
	std::cout << "You cast ";
	GetName().WriteToConsole();
	std::cout << " ";
	GetDescription().WriteToConsole();
}
