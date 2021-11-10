#include "AppController.h"
#include "MainMenu.h"
#include "DisplayList.h"
#include "State.h"

State* AppController::ActiveState = new MainMenu();
bool AppController::bIsApplicationRunning = true;

void AppController::UpdateApplication()
{
	while (bIsApplicationRunning)
	{
		ActiveState->DrawState();
	}
}
