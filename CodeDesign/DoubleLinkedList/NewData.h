#pragma once
#include "State.h"
enum class InsertType
{
	Standard,
	Front,
	Back
};
class NewData : public State
{
public:
	NewData(InsertType location = InsertType::Standard) { insertLocation = location; }
	~NewData() {}


private:
	InsertType insertLocation;
};

