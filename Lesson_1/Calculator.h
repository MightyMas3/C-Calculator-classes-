#pragma once
#include "Menu.h"


class Calculator
{

public:

	int Add(int num1, int num2);

	int Subtract(int num1, int num2);
	
	int Multiply(int num1, int num2);
	
	int Divide(int num1, int num2);
	
	int Power(int base, int exponent);
	
	void InputNumbers(int& num1, int& num2);
	
	void ProcessInput(int input);

private:

	int num1;
	int num2;

	Menu menu;

};

