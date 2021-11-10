// DoubleLinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "LinkedList.h"
#include "Profile.h"

int main()
{

	Profile* p1 = new Profile("KAM", 30);
	Profile* p2 = new Profile("JAM", 100);
	Profile* p3 = new Profile("LAM", 40);
	LinkedList* list = new LinkedList(new Node(p1));

	list->AddNewNode(new Node(p2));
	list->AddNewNode(new Node(p3));
	list->DrawList();
	
}

