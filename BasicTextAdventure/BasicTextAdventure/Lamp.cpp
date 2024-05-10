#include "Lamp.h"

Lamp::Lamp()
{
}

Lamp::Lamp(String _name)
{
	name = _name;
}

Lamp::Lamp(String _name, String _description)
{
	name = _name;
	description = _description;
}

String Lamp::GetName()
{
	return name;
}

String Lamp::GetDescription()
{
	return description;
}

void Lamp::SetDescription(String _other)
{
	description = _other;
}

void Lamp::Use()
{
	if (lightSwitch = true)
	{
		std::cout << "You have tured the light off" << std::endl;
		lightSwitch == false;
	}
	else
	{
		std::cout << "You gace tured the light on" << std::endl;
		lightSwitch == true;
	}

}
