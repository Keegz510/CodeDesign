#pragma once

class State;

class AppController
{
public:
	static void LoadMainMenu() { ActiveState = new MainMenu(); }
	static void LoadListState() { ActiveState = new DisplayList(); }

	static void UpdateApplication();

private:
	static State* ActiveState;
	static bool bIsApplicationRunning;
	
};

