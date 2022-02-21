#include "exponential.h"
#include <cmath>

Exponential::Exponential()
{

}

long long Exponential::factorial(long long n)
{
    long long res = 1;
    for(long long i = 1; i < n+1; i++){
        res *= i;
    }
    return res;
}

double Exponential::approxExp(double x)
{
    double res = 1;
    for(long long n = 1; n < order+1; n++){
        res += pow(x, n)/factorial(n);
    }
    return res;
}

long long Exponential::getOrder() const
{
    return order;
}

void Exponential::setOrder(long long order)
{
    this->order = order;
}
