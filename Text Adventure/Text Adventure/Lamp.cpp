#include "Lamp.h"


bool lampIsOn;


Lamp::Lamp()
{
	
}
Lamp::Lamp(String name, String description) :Item(name, description) 
{

}

Lamp::~Lamp()
{

}

void Lamp::Use(String _playerInput)
{
	std::cout << "You hold the lamp up and turn it 'On' or 'off'. " << std::endl;
	if (_playerInput == "on")
	{
		std::cout << "The lamp has been turned on, with a dim light around it." << std::endl;
		lampIsOn = true;
	}
	if (_playerInput == "off")
	{
		std::cout << "The lamp has been turned off, no light is being emitted." << std::endl;
		lampIsOn = false;
	}

}