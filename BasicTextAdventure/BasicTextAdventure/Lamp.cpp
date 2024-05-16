#include "Lamp.h"

Lamp::Lamp()
{
	lightSwitch = false;
}

Lamp::Lamp(String _name) 
	: Item(_name)
{
	lightSwitch = false;
}

Lamp::Lamp(String _name, String _description)
	:Item(_name,_description)
{
	lightSwitch = false;
}


void Lamp::Use()
{

	if (lightSwitch == true)
	{
		std::cout << "You have turned the light off" << std::endl;
		lightSwitch = false;
	}
	else
	{
		std::cout << "You have turned the light on" << std::endl;
		lightSwitch = true;
	}

}
