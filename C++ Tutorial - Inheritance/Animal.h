#pragma once
#include <string>
#include "IInventory.h"
#include "IMovable.h"

// If a class at least one pure virtual function then the class is abstract
// Abstract classes cannot be instantiated
class Animal : public IInventory, public IMovable
{
public:
	std::string Name;

public:
	Animal(std::string inName = "Cujo") :
		Name(inName)
	{

	}

	virtual std::string GetName() { return Name; }

	// Pure Virtual function - no implementation, marked as virtual and = 0
	virtual void PerformIntroduction() = 0;

	virtual void PerformFarewell() = 0;

	// Implement IInventory
	virtual void AddToInventory(std::string itemName) override {}
	virtual int GetNumInventorySlots() override { return 10; }
};

