#include <iostream>

int main()
{
    int eggs;
    std::cout << "How many eggs? \n";
    std::cin >> eggs;

    int dozens = (eggs - (eggs % 12)) / 12;
    int remains = eggs - dozens * 12;

    if (dozens == 1) {
        std::cout << "Buying 1 dozen. ";
    }
    else if (dozens > 1) {
        std::cout << "Buying " << dozens << " dozens. ";
    }

    if (remains == 1) {
        std::cout << "Buying 1 egg. \n";
    }
    else if (remains > 1) {
        std::cout << "Buying " << remains << " eggs. \n";
    }

    float pricePerDozen = 2;
    float pricePerREggs = .25;

    float price = pricePerDozen * dozens + pricePerREggs * remains;

    if (dozens > 10) {
        price -= dozens * .50;
    }

    std::cout << "Total price: $" << price << std::endl;

    return 0;
}
