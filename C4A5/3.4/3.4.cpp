//Delgados Tacos (Modified)
//4/26/2020
//Author: Nhan man

#include <iostream>
#include<string>

int main()
{
	double tacos = 0.99;
	double burritos = 1.99;
	double enchiladas = 2.99;
	double tostadas = 1.50;
	double drink = 0.99;
	double churro = 1.25;
	double supremeBurrito = 4.50;
	double potatoOllas = 1.99;
	double tacosOrdered = 0, burritosOrdered = 0, enchiladasOrdered = 0, tostadasOrdered = 0, drinkOrdered = 0, churroOrdered = 0, supremeBurritoOrdered = 0, potatoOllasOrdered = 0;
	double total;
	std::string choice;


	std::cout << "********Welcome to Delgados Tacos***********\n" << std::endl;
	std::cout << "  TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT " << std::endl;
	std::cout << "  T    -----------------------         T " << std::endl;
	std::cout << "  T    |         OO           |         T " << std::endl;
	std::cout << "  T    |        O--O          |         T " << std::endl;
	std::cout << "  T    |         OO           |         T " << std::endl;
	std::cout << "  T    ----------|------------         TTTTTTT " << std::endl;
	std::cout << "  T                                    T     T" << std::endl;
	std::cout << "  T                                    T     T" << std::endl;
	std::cout << "  T    OO                              T  OO T" << std::endl;
	std::cout << "  TTTTO  OTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTO  OT " << std::endl;
	std::cout << "       OO                                 OO " << std::endl;

	std::cout.precision(2);
	std::cout << "\nMenu List:\nTaco: $" << std::fixed << tacos <<
		"\nBurrito: $" << burritos <<
		"\nEnchilada: $" << enchiladas <<
		"\nTostada: $" << tostadas <<
		"\nDrink: $" << drink <<
		"\nChurro: $" << churro <<
		"\nSupreme_Burrito: $" << supremeBurrito <<
		"\nPotato_Olla: $" << potatoOllas << std::endl;


	while (true) {
		std::cout << "\nWhat would you like to ordered? (Write end to end order)" << std::endl;
		std::cin >> choice;

		if (choice == "end") {
			break;
		}

		int orderAmount = 0;
		if (choice == "Burrito") {
			std::cout << "\nHow many burritos would you like? ";
			std::cin >> orderAmount;
			if (orderAmount < 0) {
				orderAmount = 0;
			}
			burritosOrdered += orderAmount;
		}
		else if (choice == "Taco") {
			std::cout << "\nHow many tacos would you like? ";
			std::cin >> orderAmount;
			if (orderAmount < 0) {
				orderAmount = 0;
			}
			tacosOrdered += orderAmount;
		}
		else if (choice == "Enchilada") {
			std::cout << "\nHow many enchiladas would you like? ";
			std::cin >> orderAmount;
			if (orderAmount < 0) {
				orderAmount = 0;
			}
			enchiladasOrdered += orderAmount;
		}
		else if (choice == "Tostada") {
			std::cout << "\nHow many tostadas would you like? ";
			std::cin >> orderAmount;
			if (orderAmount < 0) {
				orderAmount = 0;
			}
			tostadasOrdered += orderAmount;
		}
		else if (choice == "Drink") {
			std::cout << "\nHow many drinks would you like? ";
			std::cin >> orderAmount;
			if (orderAmount < 0) {
				orderAmount = 0;
			}
			drinkOrdered += orderAmount;
		}
		else if (choice == "Churro") {
			std::cout << "\nHow many churros would you like? ";
			std::cin >> orderAmount;
			if (orderAmount < 0) {
				orderAmount = 0;
			}
			churroOrdered += orderAmount;
		}
		else if (choice == "Supreme_Burrito") {
			std::cout << "\nHow many supreme burritos would you like? ";
			std::cin >> orderAmount;
			if (orderAmount < 0) {
				orderAmount = 0;
			}
			supremeBurritoOrdered += orderAmount;
		}
		else if (choice == "Potato_Olla") {
			std::cout << "\nHow many potato ollas would you like? ";
			std::cin >> orderAmount;
			if (orderAmount < 0) {
				orderAmount = 0;
			}
			potatoOllasOrdered += orderAmount;
		}
	}

	total = (tacos * tacosOrdered) + (burritos * burritosOrdered) + (enchiladas * enchiladasOrdered) + 
		(tostadas * tostadasOrdered) + (churro * churroOrdered) + (drink * drinkOrdered) + 
		(supremeBurrito * supremeBurritoOrdered) + (potatoOllas * potatoOllasOrdered);
	std::cout << "\nYour total is >>> " << total << std::endl;

	system("pause");
	return 0;
}

