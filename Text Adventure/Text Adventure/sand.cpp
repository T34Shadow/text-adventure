#include "sand.h"

sand::sand()
{
}

sand::sand(String name, String description) :Item(name, description)
{
}

sand::~sand()
{
}

void sand::Use()
{
}

void sand::Use(String _playerInput)
{
	if (_playerInput == "use")
	{
		std::cout << "You play with the loose grains of sand in your hands, watching it slip though your fingers." << std::endl;

	}
}
