#pragma once
#include <string>
#include <iostream>
class Profile
{
public:
	Profile();
	Profile(std::string profileName, int hs);
	~Profile();

	inline void SetName(const std::string name) { profileName = name; }
	inline void SetHighestScore(const int hs) { highestScore = hs; }
	inline std::string GetName() const { return profileName; }
	inline int GetHighestScore() const { return highestScore; }

private:
	std::string profileName;	
	int highestScore;			// Highest score of the profile

	

};

