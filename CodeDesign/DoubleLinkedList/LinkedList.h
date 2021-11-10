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

	Node()
	{
		NodeID = -1;
		BeforeNode = nullptr;
		AfterNode = nullptr;
		ProfileData = nullptr;
	}

	Node(Profile* data)
	{
		NodeID = -1;
		BeforeNode = nullptr;
		AfterNode = nullptr;
		ProfileData = data;
	}

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

#pragma region Adding Nodes

	void AddRootNode(Node* node);
	// Add after a certain node
	void AddNodeAfter(Node* newNode, Node* nodeAfter);
	// Adds a new node to the end of the list
	void AddNewNode(Node* newNode);

#pragma endregion

#pragma region Deleting Nodes

	// Deletes the root node
	void DeleteRootNode();
	// Deletes the last node
	void DeleteLastNode();
	// Deletes a random node
	void DeleteNode(Node* node);


#pragma endregion

#pragma region Sorting

	void SortHighestScoreAscending();
	void SortHighestScoreDescending();

#pragma endregion

	// Finds a specific node based on the ID
	Node* GetNode(int nodeID);
	// Draws the list
	void DrawList();
	// Sorts the list

private:
	Node* rootNode;
	int nodeIDCount = 0;
	// Increment the node ID and return it
	inline int GetNodeID() { return nodeIDCount += 1; }
};

