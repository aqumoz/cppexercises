#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;

int main()
{
    int limit = 1473;

    cout << "Fibonacci madness! (" << limit << " numbers)" << endl;

    uint1024_t fi = 1;
    uint1024_t fi1 = 1;
    uint1024_t fi2;

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
