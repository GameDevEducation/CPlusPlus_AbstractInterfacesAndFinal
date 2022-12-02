#pragma once
#include "Dog.h"

// Marking a class as final prevents inheritance from it
class Beagle final :
    public Dog
{
public:
    //virtual void PerformFarewell() override;
};

