// 3.7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

int main()
{
    std::string res;
    float a = 0;
    float b = 0;
    float c = 0;

    float perimeter = 0;
    float area = 0;

    std::cout << "Do you have a right triangle, isosceles, or equilateral? (Acceptable Inputs: r i e) \n";
    std::cin >> res;

    std::cout << "Enter in side a: \n";
    std::cin >> a;

    std::cout << "Enter in side b: \n";
    std::cin >> b;

    if (res == "r") {
        c = sqrt(a * a + b * b);
        area = (a * b) / 2;
    }
    else if (res == "i") {
        std::cout << "Too many possibilities, too little time. Ending program... \n";
        return 0;
    }
    else {
        if (a != b) {
            std::cout << "Side B must be equal to Side A! \n";
            b = a;
        }
        c = a;
        area = (sqrt(3) / 4) * a * a;
    }

    perimeter = a + b + c;

    std::cout << std::endl;

    std::cout << "C Side: " << c << std::endl;
    std::cout << "Perimeter: " << perimeter << std::endl;
    std::cout << "Area: " << area << std::endl;
}