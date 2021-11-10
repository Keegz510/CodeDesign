#pragma once
#include "State.h"
class MainMenu : public State
{
public:
	MainMenu();
	~MainMenu();

	virtual void DrawState() override;
	virtual void Input() override;
};

