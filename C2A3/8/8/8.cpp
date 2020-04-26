// 8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    double paycheck;
    double percentage;

    cout << "Enter paycheck amount: \n";
    cin >> paycheck;

    cout << "Enter percentage deposited per paycheck (in decimal 0 -> 1): \n";
    cin >> percentage;

    cout.precision(2);
    cout << "Total deposited: " << fixed << paycheck * percentage * 24 + 100 << endl;
}
