#include "Sand.h"

Sand::Sand()
{
}

Sand::Sand(String _name)
{
	name = _name;
}

Sand::Sand(String _name, String _description)
{
	name = _name;
	description = _description;
}

String Sand::GetName()
{
	return name;
}

String Sand::GetDescription()
{
	return description;
}

void Sand::SetDescription(String _other)
{
	description = _other;
}

void Sand::Use()
{

}
