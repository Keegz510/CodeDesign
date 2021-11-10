#pragma once
#include "State.h"
#include <string>
enum class InsertType
{
	Standard,
	Front,
	Back
};

class Profile;

class NewData : public State
{
public:
	NewData(InsertType location = InsertType::Standard) { insertLocation = location; }
	~NewData() {}

	virtual void DrawState() override;
	virtual void Input() override;

	std::string GetUsername();
	int GetHighestScore();

private:
	InsertType insertLocation;
	Profile* newProfile;

	void AddNewNode(Profile* profile);
};

