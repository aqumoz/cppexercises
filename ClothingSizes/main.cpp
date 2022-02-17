#include <iostream>
#include <cmath>
#include "Person.h"
#include "ClothingSizes.h"
#include <string>

using namespace std;

int main()
{
    string sAge, sWeight, sHeight;
    cout << "Enter age: " << endl;
    cin >> sAge;
    cout << "Enter weight: " << endl;
    cin >> sWeight;
    cout << "Enter height: " << endl;
    cin >> sHeight;

    Person p = Person(stof(sAge), stof(sWeight), stof(sHeight));
    ClothingSizes cs = ClothingSizes(p);

    string choice;

    do {
        cout << "What clothing item would you like to know the size of? (hat, jacket, belt or q for quit): " << endl;
        cin >> choice;

        if (choice == "hat")
            cout << "The hat size is: " << cs.calcHatSize() << endl;
        else if (choice == "jacket")
            cout << "The jacket size is: " << cs.calcJacketSize() << endl;
        else if (choice == "belt")
            cout << "The belt size is: " << cs.calcWaistSize() << endl;
    } while (choice != "q");
    // cout << "Hat: " << cs.calcHatSize() << " Jacket: " << cs.calcJacketSize() << " Waist: " << cs.calcWaistSize() << endl;

    return 0;
}
