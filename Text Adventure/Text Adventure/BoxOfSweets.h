#pragma once

#include "Headers.h"
#include "Game.h"
#include "Items.h"
class BoxOfSweets : public Item
{
public:
	BoxOfSweets();
	BoxOfSweets(String name, String description);
	~BoxOfSweets();
	void Use(String _playerInput) override;

private:

};
