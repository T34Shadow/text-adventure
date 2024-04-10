//required is:
//What spells do the player have.
//What spell is the player looking for.
//Name <string>
//Damage <int>

#include "Spells.h"

Spells::Spells()
{

}

Spells::Spells(String _name, String _description, int _damage)
{
	name = _name;
	description = _description;
	damage = _damage;
}

Spells::~Spells()
{

}
