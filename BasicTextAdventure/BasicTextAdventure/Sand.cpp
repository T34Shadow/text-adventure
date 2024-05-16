#include "Sand.h"

Sand::Sand()
{
}

Sand::Sand(String _name)
	:Item(_name)
{

}

Sand::Sand(String _name, String _description)
	:Item(_name, _description)
{
	
}



void Sand::Use()
{
	std::cout << "You play with the loose grains of sand in your hands, watching it slip though your fingers." << std::endl;
}
