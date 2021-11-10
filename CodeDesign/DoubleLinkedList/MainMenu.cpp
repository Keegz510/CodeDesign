#include "MainMenu.h"

MainMenu::MainMenu()
{
	stateName = "Main Menu";
}

MainMenu::~MainMenu()
{

}

void MainMenu::DrawState()
{
	__super::DrawState();

	std::cout << "1 - Display List" << std::endl;
	std::cout << "2 - Add To List Front" << std::endl;
	std::cout << "3 - Add To List Arbitrary Location" << std::endl;
	std::cout << "4 - Add To List Back" << std::endl;
	std::cout << "=========" << std::endl;
	std::cout << "Select an Option: ";
	Input();
}

void MainMenu::Input()
{
	int input;
	std::cin >> input;

	switch (input)
	{
		case 1:
			// TODO: Change State
			break;
		case 2:
			// Change State
			break;
		case 3:
			// Change State
			break;
		case 4:
			// Change State
			break;
	}
}