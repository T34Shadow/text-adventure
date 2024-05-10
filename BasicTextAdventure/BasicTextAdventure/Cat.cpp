#include "Cat.h"


Cat::Cat()
{
	
}

Cat::Cat(String _name)
{
	name = _name;
}

Cat::Cat(String _name, String _description)
{
	name = _name;
	description = _description;
}

String Cat::GetName()
{
	return name;
} 

String Cat::GetDescription()
{
	return description;
}

void Cat::SetDescription(String _other)
{
	description = _other;
}

void Cat::Use()
{
	purring = true;
	std::cout << "The cat is purring" << std::endl;
}
