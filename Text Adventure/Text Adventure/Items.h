#pragma once

#include <cctype>
#include <cstring>
#include <iostream>

class Items
{
public:
	Items(); //defult constructor

	Items(const char* item); //basic constructor 

	Items(const Items&other); //copy constructor

	~Items(); //Destructor 
	
private:

	std::string name;
	std::string description;

protected:
};

Items::Items()
{
}

Items::~Items()
{
}