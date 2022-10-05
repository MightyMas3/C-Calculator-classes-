#include <iostream>
#include "Menu.h"
#include "Calculator.h"


int Calculator::Add(int num1, int num2)
{
	return num1 + num2;
}

int Calculator::Subtract(int num1, int num2)
{
	return num1 - num2;
}

int Calculator::Multiply(int num1, int num2)
{
	return num1 * num2;
}

int Calculator::Divide(int num1, int num2)
{
	if (num2 != 0)
	{
		return num1 / num2;
	}

	else
	{
		std::cout << "Error!" << std::endl;
		return 0;
	}
}

int Calculator::Power(int base, int exponent)
{
	int result = base;

	if (exponent == 0)
	{
		result = 1;
	}

	else if (exponent == 1)
	{
		result = base;
	}

	else
	{
		result *= Power(base, exponent - 1);
	}

	return result;
}

void Calculator::InputNumbers(int& num1, int& num2)
{
	std::cout << "Enter the first number: ";
	std::cin >> num1;

	std::cout << "Enter the second number: ";
	std::cin >> num2;
}

void Calculator::ProcessInput(int input)
{
	

	switch (input)
	{
	case (int)Menu::MenuItem::Add:
	{
		InputNumbers(num1, num2);
		std::cout << "The result is: " << Add(num1, num2) << std::endl;
		break;
	}

	case (int)Menu::MenuItem::Subtract:
	{
		InputNumbers(num1, num2);
		std::cout << "The result is: " << Subtract(num1, num2) << std::endl;
		break;
	}

	case (int)Menu::MenuItem::Multiply:
	{
		InputNumbers(num1, num2);
		std::cout << "The result is: " << Multiply(num1, num2) << std::endl;
		break;
	}

	case (int)Menu::MenuItem::Divide:
	{
		InputNumbers(num1, num2);
		std::cout << "The result is: " << Divide(num1, num2) << std::endl;
		break;
	}

	case (int)Menu::MenuItem::Power:
	{
		InputNumbers(num1, num2);  //base and exponent
		std::cout << "The result is: " << Power(num1, num2) << std::endl;
		break;
	}

	default:
	{
		std::cout << "Goodbye!" << std::endl;
		break;
	}
	};

	system("pause");
}