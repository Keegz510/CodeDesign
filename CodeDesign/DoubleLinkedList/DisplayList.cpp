#include "DisplayList.h"
#include "AppController.h"
#include "LinkedList.h"
#include <iostream>
void DisplayList::DrawState()
{
	__super::DrawState();
	AppController::List->DrawList();

	std::cout << "========" << std::endl;
	std::cout << "Press 1 to or press 2 to return...."; 
}

void DisplayList::Input()
{
	int input;
	if (input == 1)
	{
		type = DrawType::Sorted;
		AppController::List->SortHighestScoreAscending();
	}
	else
	{
		AppController::LoadMainMenu();
	}
}
