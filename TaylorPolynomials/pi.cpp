#include "pi.h"
#include <cmath>

Pi::Pi()
{

}

double Pi::approxPi(){
    double res = 0;
    for(long long n = 0; n < order; n++){
        res += pow(-1, n)/(2*n+1);
    }
    return res * 4;
}

int Pi::getOrder() const
{
    return order;
}

void Pi::setOrder(int order)
{
    this->order = order;
}
