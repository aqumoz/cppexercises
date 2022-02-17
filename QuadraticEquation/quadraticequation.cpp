#include <cmath>
#include <string>
#include <iostream>
#include "quadraticequation.h"

using namespace std;



QuadraticEquation::QuadraticEquation(double a, double b, double c)
{
    // Hvis D<0 så er løsningerne komplekse.
    // Hvis D=0 så er det en dobbelt rod (der findes kun en løsning).
    // Hvis D>0 så er der 2 rødder (der findes 2 løsninger).

    // a*x^2+bx+c

    struct complex res1 = {0,0};
    struct complex res2 = {0,0};
    res = {res1, res2};


    double D = pow(b,2)-4*a*c;

    if(D < 0){
        res.res1.Re = (-b) / 2*a;
        res.res1.Im = sqrt(-D) / 2*a;

        res.res2.Re = res.res1.Re;
        res.res2.Im = (-1) * res.res1.Im;
    }
    else if (D == 0){
        res.res1.Re = (-b) / 2*a;
        res.res1.Im = 0;

        res.res2.Re = res.res1.Re;
        res.res2.Im = 0;
    }
    else {
        res.res1.Re = ((-b) + sqrt(D)) / 2*a;
        res.res1.Im = 0;

        res.res2.Re = ((-b) - sqrt(D)) / 2*a;
        res.res2.Im = 0;
    }
}

std::string QuadraticEquation::asString(){
    return "First solution: " + to_string(res.res1.Re) + (res.res1.Im<0?"":"+") + to_string(res.res1.Im) + "i" +
            "\nSecond solution: " + to_string(res.res2.Re) + (res.res2.Im<0?"":"+") + to_string(res.res2.Im) + "i";
}

