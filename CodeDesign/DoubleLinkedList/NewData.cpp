#include "NewData.h"
#include <iostream>
#include "Profile.h"
#include "LinkedList.h";
#include "AppController.h"
void NewData::DrawState()
{
	__super::DrawState();
	std::cout << "Username: ";
	std::string user = GetUsername();
	std::cout << "Highest Score: ";
	int score = GetHighestScore();

	newProfile = new Profile(user, score);
}

void NewData::Input()
{
	
}

std::string NewData::GetUsername()
{
	std::string Username;
	std::cin >> Username;
	std::cout << std::endl;
	return Username;
}

int NewData::GetHighestScore()
{
	int score;
	std::cin >> score;
	std::cout << std::endl;
	return score;
}

void NewData::AddNewNode(Profile* profile)
{
	if(profile == nullptr) return;

	Node* node = new Node(profile);
	switch (insertLocation)
	{
		case InsertType::Standard:
			AppController::List->AddNewNode(node);
			break;
		case InsertType::Front:
			AppController::List->AddRootNode(node);
			break;
		case InsertType::Back:
			// TODO: Find Node
			break;

	}

}
