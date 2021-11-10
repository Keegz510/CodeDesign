#include "Profile.h"

Profile::Profile()
{
}

Profile::Profile(char profileName, int hs)
{
	this->profileName = profileName;
	highestScore = hs;
}

Profile::~Profile()
{
}
