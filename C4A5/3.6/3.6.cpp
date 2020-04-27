/* 
    The manager of the Lake View Hotel wants a program that calculates and displays a guest's total bill. 
    Each guest pays a room charge that is based on a per-night rate. For example, if the per-night rate is $100 and the guest stays two nights,
    the room charge is $200. 
    Customers also may incur a one-time room service charge of $35 dollars and a one-time telephone charge of $0.25 per minute.
    (Must be placed inside a while loop that asks you if you want to stay another night, 
    you have to make a decision if you want to use the phone yes or no, and if you want room service yes or no.)
    Must have a total at the end.
*/

#include <iostream>

int main()
{
    double perNightRate;
    int numOfNights = 1;
    const double ROOM_SERVICE = 35;
    const double TELEPHONE = .25;

    float minutesOnTele = 0;
    bool isRoomService;

    std::cout << "What is per-night rate? \n";
    std::cin >> perNightRate;

    std::string res;
    
    std::cout << "Want room service? yes no \n";
    std::cin >> res;
    
    isRoomService = (res == "yes");

    std::cout << "Want use phone? yes no \n";
    std::cin >> res;

    if (res == "yes") {
        std::cout << "How many minutes on the phone? \n";
        std::cin >> minutesOnTele;
    }

    while (true) {
        std::cout << "Do you want to stay another night? yes no\n";
        std::cin >> res;
        if (res == "yes") {
            numOfNights += 1;
        }
        else {
            break;
        }
    }

    double price = perNightRate * numOfNights + TELEPHONE * minutesOnTele;
    if (isRoomService) {
        price += ROOM_SERVICE;
    }

    std::cout.precision(2);
    std::cout << "Total price: $" << std::fixed << price << std::endl;
}
