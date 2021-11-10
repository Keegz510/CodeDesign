#pragma once

enum class InsertType
{
	Standard,
	Front,
	Back
};
class NewData
{
public:
	NewData(InsertType location = InsertType::Standard);
	~NewData();

private:
	InsertType insertLocation;
};

