#ifndef CLOTHINGSIZES_H
#define CLOTHINGSIZES_H
#include "Person.h"

class ClothingSizes
{
public:
    ClothingSizes(Person &p);
    double calcHatSize();
    double calcJacketSize();
    double calcWaistSize();
private:
    Person p;
};

#endif // CLOTHINGSIZES_H
