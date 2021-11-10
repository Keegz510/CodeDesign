#include "LinkedList.h"

LinkedList::LinkedList()
{
}

LinkedList::LinkedList(Node* rootNode)
{
}

LinkedList::~LinkedList()
{
}

void LinkedList::AddRootNode(Node* node)
{
	// Validate the new Node
	if (node != nullptr)
	{
		// If we have a root node set the new node as the before node
		if (rootNode != nullptr) 
			rootNode->BeforeNode = node;

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
		}
		else
		{
			nextNode = nextNode->AfterNode;
		}
	}
}
