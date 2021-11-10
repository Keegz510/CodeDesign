#pragma once

#pragma region Forward Declarations

class Profile;

#pragma endregion

struct Node
{
	Node* before;			// Node that comes before this node
	Node* after;			// Node that comes from after this node
	Profile* data;
};

class LinkedList
{

};

