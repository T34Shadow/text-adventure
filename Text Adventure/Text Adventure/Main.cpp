#include "Items.h"
#include "Headers.h"
#include "Game.h"
#include "Lamp.h"
#include "BoxOfSweets.h"
#include "Cat.h"




int main()
{
	Item* item01 = new Lamp("Lamp ", "The lamp gives off a dim lighting. ");
	Item* item02 = new BoxOfSweets("Box of sweets ", "This is a box of sweets with 6 donuts. ");
	Item* item03 = new Cat("Ruby ", "This is a small cat that is white with blue eyes. ");

	String _playerInput;
	
	item01->name.WriteToConsole(std::cout);
	item01->description.WriteToConsole(std::cout);
	std::cout << std::endl;
	item02->name.WriteToConsole(std::cout);
	item02->description.WriteToConsole(std::cout);
	std::cout << std::endl;
	item03->name.WriteToConsole(std::cout);
	item03->description.WriteToConsole(std::cout);

	item03->Use();
	item02->Use();

	_playerInput.ReadFromConsole().ToLower();
	item01->Use(_playerInput);
	_playerInput.ReadFromConsole().ToLower();
	item02->Use(_playerInput);

	
}