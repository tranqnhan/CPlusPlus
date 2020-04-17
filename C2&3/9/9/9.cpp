// 9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int bagels;
    int coffees;
    int donuts;

    cout << "Number of bagels: \n";
    cin >> bagels;
    cout << "Number of donuts: \n";
    cin >> donuts;
    cout << "Number of coffees: \n";
    cin >> coffees;

    cout.precision(2);
    cout << "Total amount: " << fixed << bagels * .99 + donuts * .75 + coffees * 1.2;
}
