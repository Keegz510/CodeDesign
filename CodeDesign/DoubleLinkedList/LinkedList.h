#pragma once
#include <string>
#pragma region Forward Declarations

class Profile;

#pragma endregion

struct Node
{
public:
	int NodeID;
	Node* BeforeNode;			// Node that comes before this node
	Node* AfterNode;			// Node that comes from after this node
	Profile* ProfileData;		// Data to store

	Node(Node* before, Node* after, Profile* data)
	{
		NodeID = -1;
		BeforeNode = before;
		AfterNode = after;
		ProfileData = data;
	}
};

class LinkedList
{
public:
	LinkedList();
	LinkedList(Node* rootNode);
	~LinkedList();


	void AddRootNode(Node* node);
	// Add after a certain node
	void AddNodeAfter(Node* newNode, Node* nodeAfter);
	// Adds a new node to the end of the list
	void AddNewNode(Node* newNode);
	// Finds a specific node based on the ID
	Node* GetNode(int nodeID);

private:
	Node* rootNode;
	int nodeIDCount = 0;
};

