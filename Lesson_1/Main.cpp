#include "Calculator.h"
#include "Menu.h"

int main()
{
	Menu menu;
	Calculator calculator;

	int input = 0;

	while (input != (int)Menu::MenuItem::Exit)
	{
		input = menu.Display();
		calculator.ProcessInput(input);
	}
}