#include <cmath>
#include "ClothingSizes.h"
#include "Person.h"

ClothingSizes::ClothingSizes(Person &p) : p(p) {}

double ClothingSizes::calcHatSize(){
    return p.getWeight() / p.getHeight() * 41.25 * M_PI;
}


double ClothingSizes::calcJacketSize(){
    // h*m/335 inches + 1/8 of an inch for each 10 years over age 30
    double extra = p.getAge() > 30 ? (1/8 / 2.54)* p.getAge()/10 : 0;
    return p.getHeight()*p.getWeight()/(335 / 2.54) + extra;
}


double ClothingSizes::calcWaistSize(){
    // m/2.6 inches +  1/10 of an inch for each 2 years over age 28
    double extra = p.getAge() > 28 ? (1/10 / 2.54) * p.getAge()/2 : 0;
    return p.getWeight()/(2.6 / 2.54) + extra;
}
