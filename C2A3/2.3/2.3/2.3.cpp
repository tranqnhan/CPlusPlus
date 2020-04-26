// 2.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
The manager of the Lake View Hotel wants a program that calculates and displays a guest's total bill. 
Each guest pays a room charge that is based on a per-night rate. 
For example, if the per-night rate is $100 and the guest stays two nights, the room charge is $200. 
Customers also may incur a one-time room service charge of $35 dollars and a one-time telephone charge of $0.25 per minute.
*/

#include <iostream>

using namespace std;

int main()
{
    double perNightRate;
    int numOfNights;
    const double ROOM_SERVICE = 35;
    const double TELEPHONE = .25;

    float minutesOnTele;
    bool isRoomService;

    cout << "What is per-night rate? \n";
    cin >> perNightRate;
    cout << "How many nights? \n";
    cin >> numOfNights;
    cout << "Want room service? y n \n";
    string res;
    cin >> res;
    isRoomService = (res == "y");
    cout << "Minutes on telephone... \n";
    cin >> minutesOnTele;

    double price = perNightRate * numOfNights + TELEPHONE * minutesOnTele;
    if (isRoomService) {
        price += ROOM_SERVICE;
    }
    cout << "Total price: $" << price << std::endl;
}
