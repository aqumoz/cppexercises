#include <iostream>
#include <cmath>
#include "Person.h"
#include "ClothingSizes.h"
#include <string>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;


    string sAge, sWeight, sHeight;
    cout << "Enter age: " << endl;
    cin >> sAge;
    cout << "Enter weight: " << endl;
    cin >> sWeight;
    cout << "Enter height: " << endl;
    cin >> sHeight;

    Person p = Person(stoi(sAge), stoi(sWeight), stoi(sHeight));

    ClothingSizes cs = ClothingSizes(p);
    cout << "Hat: " << cs.calcHatSize() << " Jacket: " << cs.calcJacketSize() << " Waist: " << cs.calcWaistSize() << endl;

    return 0;
}
