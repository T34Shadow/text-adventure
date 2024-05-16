#include "Item.h"


Item::Item()
{
	
}

Item::Item(String _name)
{
	name = _name;
}

Item::Item(String _name, String _description)
{
	name = _name;
	description = _description;
}

Item::~Item()
{

}

String Item::GetName()
{
	return name;
}

String Item::GetDescription()
{
	return description;
}

void Item::SetDescription(String _description)
{
	description = _description;
}
