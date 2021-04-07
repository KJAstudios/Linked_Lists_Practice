#include <iostream>
#include "singlyLinkedList.h"

void singlyLinkedList::printList() 
{
	if (head == nullptr) 
	{
		std::cout << "No List";
		return;
	}
	singleLinkNode* curNode = head;
	std::cout << curNode->data;
	while (curNode->nextNode != nullptr)
	{
		std::cout << " -> ";
		curNode = curNode->nextNode;
		std::cout << curNode->data;
	}
	
}
void singlyLinkedList::prepend(int value){
	if (head == nullptr) 
	{
		head = new singleLinkNode(value);
	}
	else
	{
		singleLinkNode* tempNode = head->nextNode;
		head = new singleLinkNode(value, tempNode);
	}
}

void singlyLinkedList::insert(int value, int prevValue) 
{
	if (head != nullptr) {
		singleLinkNode* curNode = head;
		while (curNode != nullptr) {
			if (curNode->data == prevValue) {
				singleLinkNode* tempNode = new singleLinkNode(value, curNode->nextNode);
				curNode->nextNode = tempNode;
				return;
			}
			curNode = curNode->nextNode;
		}

	}
}

void singlyLinkedList::append(int value) {
	singleLinkNode* tempNode = new singleLinkNode(value);
	if (head == nullptr) {
		head = tempNode;
		return;
	}
	singleLinkNode* curNode = head;
	while (curNode != nullptr) {
		if (curNode->nextNode == nullptr) {
			curNode->nextNode = tempNode;
			return;
		}
		curNode = curNode->nextNode;
	}
}

void singlyLinkedList::deleteNode(int index) {
	if (head == nullptr) {
		return;
	}
	singleLinkNode* curNode = head;
	singleLinkNode* prevNode = head;
	for (int i = 0; i < index; i++) {
		if (curNode == nullptr) {
			return;
		}
		prevNode = curNode;
		curNode = curNode->nextNode;
	}
	singleLinkNode* tempNode = curNode->nextNode;
	prevNode->nextNode = tempNode;
	delete curNode;
}