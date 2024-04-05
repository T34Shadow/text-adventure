#include "BoxOfSweets.h"

BoxOfSweets::BoxOfSweets()
{

}
BoxOfSweets::BoxOfSweets(String name, String description) :Item(name, description) {}
BoxOfSweets::~BoxOfSweets()
{

}


void BoxOfSweets::Use(String _playerInput)
{
int donutCount = 6;
	std::cout << "You are holding the box of sweets with " << donutCount << " donuts, you can eat one donut. " << std::endl;
	if (_playerInput == "use")
	{
		std::cout << "You have eaten one of the donuts." << std::endl;
		donutCount --;
		if (donutCount == 0)
		{
			std::cout << "All the donuts have been eaten." << std::endl;
		}
	}
	
}