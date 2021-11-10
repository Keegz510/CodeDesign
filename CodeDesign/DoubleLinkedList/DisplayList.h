#pragma once
#include "State.h"

enum class DrawType
{
	Standard,
	Sorted
};

class DisplayList : public State
{
public:
	DisplayList() { stateName = "List"; }
	~DisplayList() {}

	virtual void DrawState() override;
	virtual void Input() override;

private:
	DrawType type;


};

