#include <iostream>
#include "gmp-6.2.1/gmp-impl.h"
using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    int limit = 1000;

     fi = 1;
    long long fi1 = 1;
    long long fi2;

    cout << fi << endl;
    cout << fi1 << endl;

    for(int i = 0; i < limit; i++){
        fi2 = fi + fi1;
        fi = fi1;
        fi1 = fi2;
        cout << fi2 << endl;
    }

    return 0;
}
