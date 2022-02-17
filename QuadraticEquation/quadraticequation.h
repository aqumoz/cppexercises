#ifndef QUADRATICEQUATION_H
#define QUADRATICEQUATION_H

#include <string>

class QuadraticEquation
{
public:
    QuadraticEquation(double a, double b, double c);
    std::string asString();
private:
    double a;
    double b;
    double c;
    struct complex{
        double Re;
        double Im;
    };

    struct result{
        complex res1;
        complex res2;
    };

    struct result res;
};

#endif // QUADRATICEQUATION_H
