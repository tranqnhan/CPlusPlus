#include <iostream>

float CelciusToFahrenheit(float celcius);

int main()
{
    float eightTemp;
    float twelveTemp;
    float fiveTemp;

    std::cout << "Celcius Temperature at 8:00 AM \n";
    std::cin >> eightTemp;

    std::cout << "Celcius Temperature at 12:00 PM \n";
    std::cin >> twelveTemp;

    std::cout << "Celcius Temperature at 5:00 PM \n";
    std::cin >> fiveTemp;

    std::cout << "Fahrenheit Temperature at 8:00 AM " << CelciusToFahrenheit(eightTemp) << std::endl;

    std::cout << "Fahrenheit Temperature at 12:00 PM " << CelciusToFahrenheit(twelveTemp) << std::endl;

    std::cout << "Fahrenheit Temperature at 5:00 PM " << CelciusToFahrenheit(fiveTemp) << std::endl;
}

float CelciusToFahrenheit(float celcius) {
    return (celcius * 9.0f / 5.0f) + 32.0f;
}