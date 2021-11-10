#pragma once

class State;
class LinkedList;

class AppController
{
public:
	static void LoadMainMenu() { ActiveState = new MainMenu(); }
	static void LoadListState() { ActiveState = new DisplayList(); }

	static void UpdateApplication();
	static LinkedList* List;

private:
	static State* ActiveState;
	static bool bIsApplicationRunning;
	
	
};

