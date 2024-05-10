#pragma once
#include "String.h"

class Item
{
public:

	Item();
	
	~Item();

protected:

	virtual String GetName() =0;
	virtual String GetDescription() =0;

	virtual void SetDescription(String _other) =0;
	virtual void Use() =0;

};