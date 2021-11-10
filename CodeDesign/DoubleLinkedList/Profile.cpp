#include "Profile.h"

Profile::Profile()
{
}

Profile::Profile(std::string profileName, int hs)
{
	this->profileName = profileName;
	highestScore = hs;
}

Profile::~Profile()
{
}
