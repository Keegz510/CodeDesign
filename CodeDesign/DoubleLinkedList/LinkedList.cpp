#include "LinkedList.h"
#include "Profile.h"
#include <iostream>
LinkedList::LinkedList()
{
	rootNode = nullptr;
}

LinkedList::LinkedList(Node* rootNode)
{
	this->rootNode = rootNode;
}

LinkedList::~LinkedList()
{
	delete rootNode;
}

void LinkedList::AddRootNode(Node* node)
{
	// Validate the new Node
	if (node != nullptr)
	{
		// If we have a root node set the new node as the before node
		if (rootNode != nullptr)
		{
			rootNode->BeforeNode = node;
			node->AfterNode = rootNode;
		}
		
		node->NodeID = GetNodeID();

		// Make the new node root node
		rootNode = node;
	}
}

void LinkedList::AddNodeAfter(Node* newNode, Node* nodeAfter)
{
	if (newNode != nullptr)
	{
		newNode->BeforeNode = nodeAfter;
		newNode->AfterNode = nodeAfter->AfterNode;
		nodeAfter->AfterNode = newNode;
		newNode->NodeID = GetNodeID();
	}
}

void LinkedList::AddNewNode(Node* newNode)
{
	if (rootNode == nullptr)
	{
		rootNode = newNode;
		return;
	}


	Node* nextNode = rootNode;
	while (true)
	{
		if (nextNode->AfterNode == nullptr)
		{
			nextNode->AfterNode = newNode;
			break;
		}
		else
		{
			nextNode = nextNode->AfterNode;
		}
	}

	newNode->NodeID = GetNodeID();
}

void LinkedList::DeleteRootNode()
{
	if (rootNode == nullptr) return;

	rootNode = rootNode->AfterNode;
	rootNode->BeforeNode = nullptr;
}

void LinkedList::DeleteLastNode()
{
	if (rootNode == nullptr) return;

	Node* node = rootNode;
	while (true)
	{
		if (node->AfterNode == nullptr)
		{
			node->BeforeNode = nullptr;
			delete node;
			break;
		}
	}
}

void LinkedList::DeleteNode(Node* node)
{
	if (rootNode == nullptr) return;

	Node* checkNode = rootNode;

	while (true)
	{
		if (checkNode == node)
		{
			checkNode->BeforeNode->AfterNode = checkNode->AfterNode;
			checkNode->AfterNode->BeforeNode = checkNode->BeforeNode;
			delete checkNode;
			break;
		}
	}
}

Node* LinkedList::GetNode(int nodeID)
{
	Node* node = rootNode;			// Set the root node as the first node
	// Loop while the node isn't null
	while (node != nullptr)
	{
		// Return the node if the nodeID's match
		if (node->NodeID == nodeID)
			return node;
	}

	return new Node();
}

void LinkedList::DrawList()
{
	Node* node = rootNode;
	if (node != nullptr)
	{
		while(true)
		{
			// Draw the data
			std::cout << "Username: " << node->ProfileData->GetName() << " Highest Score: " << node->ProfileData->GetHighestScore();
			std::cout << std::endl;
			std::cout << "||\n||\n";

			// If it's the last node end the loop
			if (node->AfterNode == nullptr)
			{
				std::cout << "End List" << std::endl;
				break;
			}
			else
			{
				// Otherwise set the next node
				node = node->AfterNode;
			}
		}
	}
	else
	{
		std::cout << "Profiles In List" << std::endl;
	}
}
