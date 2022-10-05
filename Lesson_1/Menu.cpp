#include <iostream>
#include <string>
#include "Menu.h"

int Menu::Display()
{
	system("cls");
	std::cout << "#=======================#" << std::endl;
	std::cout << "|      CALCULATOR       |" << std::endl;
	std::cout << "#=======================#" << std::endl;
	std::cout << "| 1. Add                |" << std::endl;
	std::cout << "| 2. Subtract           |" << std::endl;
	std::cout << "| 3. Multiply           |" << std::endl;
	std::cout << "| 4. Divide             |" << std::endl;
	std::cout << "| 5. Power              |" << std::endl;
	std::cout << "| 6. Exit               |" << std::endl;
	std::cout << "#=======================#" << std::endl << std::endl;

	int input;

	do
	{
		std::cout << "Please enter an option: ";
		std::cin >> input;
	} while (input < (int)MenuItem::Add || input >(int)MenuItem::Exit);

	return input;
}
