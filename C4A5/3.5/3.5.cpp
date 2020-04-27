// Simple roman calculator
// 4/26/2020
// Author: Nhan Tran

#include <iostream>

int main()
{
    int one = 1;
    int five = 5;
    int ten = 10;
    int fifty = 50;

    std::string roman = "";
    int number = 0;

    std::cout << "Enter a roman number: " << std::endl;
    std::cin >> roman;

    for (const char& c : roman) {
        if (c == 'I') {
            number += one;
        }
        else if (c == 'V') {
            number += five;
        }
        else if (c == 'X') {
            number += ten;
        }
        else if (c == 'L') {
            number += fifty;
        }
    }

    std::cout << "\nRoman Number: " << number << std::endl;

}
