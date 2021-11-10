#pragma once

class State;

class AppController
{

	static void LoadMainMenu() { ActiveState = new MainMenu(); }

	static void UpdateApplication();

private:
	static State* ActiveState;
	static bool bIsApplicationRunning;
	
};

