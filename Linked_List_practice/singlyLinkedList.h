#include "singleLinkNode.h"
#pragma once
class singlyLinkedList
{
public:
	void printList();
	void prepend(int value);
	void insert(int value, int prevValue);
	void append(int value);
	void deleteNode(int index);
	void deleteList();
private:
	singleLinkNode* head = nullptr;
};