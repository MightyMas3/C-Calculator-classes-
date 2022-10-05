#pragma once
#include <iostream>
#include <string>


class Menu
{
public:

	enum class MenuItem
	{
		Add = 1,
		Subtract = 2,
		Multiply = 3,
		Divide = 4,
		Power = 5,
		Exit = 6
	};

	int Display();
	
};

