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
