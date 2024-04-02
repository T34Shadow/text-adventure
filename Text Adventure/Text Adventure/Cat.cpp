#include "Cat.h"

Cat::Cat()
{

}

Cat::Cat(String name, String description) :Item(name, description) 
{

}

Cat::~Cat()
{
	
}

void Cat::Use()
{
	std::cout << "You have pet the cat, the cat is very happy" << std::endl;
}
