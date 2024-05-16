#include "BoxOfSweets.h"

BoxOfSweets::BoxOfSweets()
{
	count = 6;
}

BoxOfSweets::BoxOfSweets(String _name)
	:Item(_name)
{
	count = 6;
}

BoxOfSweets::BoxOfSweets(String _name, String _description)
	:Item(_name, _description)
{
	count = 6;
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
