#include "Cat.h"


Cat::Cat()
{
	purring = false;
}

Cat::Cat(String _name)
	:Item(_name)
{
	purring = false;
}

Cat::Cat(String _name, String _description)
	:Item(_name, _description)
{
	purring = false;
}



void Cat::Use()
{
	purring = true;

	if (purring == true)
	{
		std::cout << "The cat is purring" << std::endl;
	}
	else
	{
		std::cout << "The cat is not purring" << std::endl;
	}
}
