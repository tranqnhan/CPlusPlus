// 3.8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    double small = 20;
    double medium = 40;
    double large = 60;

    double mushroom = 5.50;
    double pepperoni = 1000.00;

    double total = 0;

    std::string res = "";

    while (true) {
        std::cout << "Would you like a pizza? (y n) \n";
        std::cin >> res;

        if (res == "n") {
            break;
        }

        std::cout << "Would you like a small, medium, or large? (s m l) \n";
        std::cin >> res;

        if (res == "s") {
            total += small;
        }
        else if (res == "m") {
            total += medium;
        }
        else {
            total += large;
        }

        std::cout << "Would you like pepperoni or mushroom toppings? (p m) \n"; 
        std::cin >> res;

        if (res == "p") {
            total += pepperoni;
        }
        else {
            total += mushroom;
        }
    }

    std::cout.precision(2);
    std::cout << "Get scammed: $" << std::fixed << total << std::endl;
}