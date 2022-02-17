#include "Person.h"

Person::Person(int age, double width, double height)
{
    this->age = age;
    this->weight = width;
    this->height = height;
}

int Person::getAge() const
{
    return age;
}

void Person::setAge(int age)
{
    this->age = age;
}

double Person::getWeight() const
{
    return weight;
}

void Person::setWeight(double width)
{
    this->weight = width;
}

double Person::getHeight() const
{
    return height;
}

void Person::setHeight(double height)
{
    this->height = height;
}
