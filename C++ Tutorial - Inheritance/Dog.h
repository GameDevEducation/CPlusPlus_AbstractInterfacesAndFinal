#pragma once
#include "Animal.h"
class Dog :
    public Animal
{
public:
    virtual void PerformIntroduction() override;

    // final prevents any child class from overriding this function
    virtual void PerformFarewell() final override;

    // Implement IMovable
    virtual float GetMaxSpeed() override { return 5; }
};

