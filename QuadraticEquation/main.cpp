#include <iostream>
#include "quadraticequation.h"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    string sa, sb, sc;
    cout << "Indtast a: " << endl;
    cin >> sa;
    cout << "Indtast b: " << endl;
    cin >> sb;
    cout << "Indtast c: " << endl;
    cin >> sc;

    QuadraticEquation qe = QuadraticEquation(stod(sa), stod(sb), stod(sc));
    cout << qe.asString() << endl;

    return 0;
}
