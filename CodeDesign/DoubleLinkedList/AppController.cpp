#include "AppController.h"
#include "MainMenu.h"
#include "DisplayList.h"
#include "LinkedList.h"
#include "State.h"

State* AppController::ActiveState = new MainMenu();
bool AppController::bIsApplicationRunning = true;
LinkedList* AppController::List = new LinkedList();

void AppController::UpdateApplication()
{
	while (bIsApplicationRunning)
	{
		ActiveState->DrawState();
	}
}
