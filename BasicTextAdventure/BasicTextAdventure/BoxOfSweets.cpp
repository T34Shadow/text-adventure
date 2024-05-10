#include "BoxOfSweets.h"

BoxOfSweets::BoxOfSweets()
{
}

BoxOfSweets::BoxOfSweets(String _name)
{
	name = _name;
}

BoxOfSweets::BoxOfSweets(String _name, String _description)
{
	name = _name;
	description = _description;
}

String BoxOfSweets::GetName()
{

	return name;
}

String BoxOfSweets::GetDescription()
{
	return description;
}

void BoxOfSweets::SetDescription(String _other)
{
	description = _other;
}

void BoxOfSweets::Use()
{
	if (count <= 0)
	{
		std::cout << "There is no sweets left to eat" << std::endl;
	}
	else
	{
		count -= 1;
		std::cout << "You have eaten a sweet " << count << " are left" << std::endl;
	}

	
}
