// C++ Tutorial - Inheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Beagle.h"

int main()
{
	Animal* animalPtr = new Beagle();

	animalPtr->PerformIntroduction();
	std::cout << "Inventory space: " << animalPtr->GetNumInventorySlots() << std::endl;
	animalPtr->PerformFarewell();

	delete animalPtr;
}
