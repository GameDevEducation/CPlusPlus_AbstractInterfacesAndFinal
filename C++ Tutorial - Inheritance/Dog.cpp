#include "Dog.h"
#include <iostream>

void Dog::PerformIntroduction()
{
	std::cout << "I'm a dog! My name is " << GetName() << "." << std::endl;
}

void Dog::PerformFarewell()
{
	std::cout << "Goodbye!" << std::endl;
}
