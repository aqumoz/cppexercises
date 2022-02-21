#include <iostream>
#include "pi.h"
#include <string>
#include <iomanip>
#include "exponential.h"
#include <boost/multiprecision/cpp_int.hpp>
#include <date.h>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    Pi pi = Pi();
    //pi.setOrder(1000000000);
    pi.setOrder(10);
    cout << std::setprecision(30) << pi.approxPi() << endl;

    Exponential exponential = Exponential();
    exponential.setOrder(24);
    cout << std::setprecision(30) << exponential.approxExp(6) << endl;

    Date date0 = Date(2022, 2, 21);
    cout << date0.getDayOfWeek() << endl;

    return 0;
}
