#pragma once
#include <string>

class IInventory
{
public:
	virtual void AddToInventory(std::string itemName) = 0;
	virtual int GetNumInventorySlots() = 0;
};

