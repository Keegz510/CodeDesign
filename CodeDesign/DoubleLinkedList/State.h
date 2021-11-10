#pragma once
#include <string>
#include <iostream>
class State
{
public:

	State()
	{}
	~State()
	{}

	virtual void DrawState()
	{
		std::cout << stateName << std::endl;
		std::cout << "|===================|" << std::endl;
		// Print State Here
	}

	virtual void Input() = 0;


protected:
	std::string stateName;

};

