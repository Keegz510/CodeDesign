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
	
}

void LinkedList::AddNewNode(Node* newNode)
{
}
