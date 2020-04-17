// 2.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
You are a currency trader. You want a program that converts American dollars to British Pounds, Mexican Pesos, 
and Japanese Yen. Look up the current conversion rates for one American dollar.
I want a screen shot of your results to show the following
Have a conversion rate of $1000 dollars to each of the three currencies and do the same for $500 dollars.
*/

#include <iostream>
using namespace std;
int main()
{
    float americans;
    cout << "Covert the American money: \n";
    cin >> americans;

    cout.precision(2);
    cout << "British Pounds: " << fixed << .8 * americans << endl;
    cout << "Mexican Pesos: " << fixed << 23.71 * americans << endl;
    cout << "Japanese Yen: " << fixed << 107.73 * americans << endl;

}