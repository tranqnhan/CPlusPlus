// 10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	double weeklyPay;
	cout << "Enter weekly gross pay: \n";
	cin >> weeklyPay;

	cout.precision(2);
	cout << "Total pay after taxes: " << fixed << weeklyPay - .20 * weeklyPay - .08 * weeklyPay - .04 * weeklyPay;
}
