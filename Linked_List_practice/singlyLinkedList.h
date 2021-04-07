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
	int countLength();
	bool iterativeSearch(int value);
	bool recursiveSearch(int value, singleLinkNode* inNode = nullptr, bool isStart = true);
	void reverseList();
private:
	singleLinkNode* head = nullptr;
};