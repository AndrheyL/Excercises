// Programming Homework Profit and Loss.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int main();
	float unitPrice, salesPrice, amount;

    std::cout << "Please enter the Product's price: \n";
	std::cin >> unitPrice;

	std::cout << "Please enter the Sale price: \n";
	std::cin >> salesPrice;

	if (salesPrice > unitPrice)
	{
		amount = salesPrice - unitPrice;
		std::cout << " You are profitting. It is now :  " << amount;

	}
	else if (unitPrice < salesPrice)
	{
		amount = unitPrice - salesPrice;
		std::cout << "You are at a loss by :  " << amount;

	}
	else
	{
		std::cout << "You are not at profit nor at loss!\n";

	}

	return 0;

}
