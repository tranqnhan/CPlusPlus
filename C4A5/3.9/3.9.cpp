// 3.9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdlib.h>
#include <iostream>
#include <cmath>

int main()
{
    std::string res;
    int score = 0;

    while (true) {
        std::cout << "Roll a dice? (y n) \n";
        std::cin >> res;

        if (res != "y") {
            break;
        }

        int roll = ceil(rand() % 6 + 1);
        std::cout << "You rolled a " << roll << ". Congrats. \n";
        score += roll;
    }

    std::cout << "\nYour total score is " << score << ". Wow, what a number. \n";
}