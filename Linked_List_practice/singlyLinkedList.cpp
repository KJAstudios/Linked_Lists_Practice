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
	if (head == nullptr) return;
	if (index == 0 && head->nextNode == nullptr) {

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

void singlyLinkedList::deleteList() {
	if (head == nullptr) return;
	singleLinkNode* curNode = head;
	singleLinkNode* nextNode = curNode->nextNode;
	head = nullptr;
	while (nextNode != nullptr) {
		delete curNode;
		curNode = nextNode;
		nextNode = curNode->nextNode;
	}
}

int singlyLinkedList::countLength() {
	if (head == nullptr) return 0;
	int length = 0;
	singleLinkNode* curNode = head;
	while (curNode != nullptr) {
		length++;
		curNode = curNode->nextNode;
	}
	return length;
}

bool singlyLinkedList::iterativeSearch(int value) {
	if (head == nullptr) return false;
	if (head->data == value) return true;
	singleLinkNode* curNode = head;
	while (curNode != nullptr) {
		if (curNode->data == value) {
			return true;
		}
		curNode = curNode->nextNode;
	}
	return false;
}

bool singlyLinkedList::recursiveSearch(int value, singleLinkNode* inNode, bool isStart) {
	if (inNode == nullptr && isStart) inNode = head;
	if (inNode == nullptr) return false;
	if (inNode->data == value) return true;
	return recursiveSearch(value, inNode->nextNode, false);
}

void singlyLinkedList::reverseList() {
	if (head == nullptr) return;
	singleLinkNode* curNode = head;
	singleLinkNode* prevNode = nullptr;
	singleLinkNode* nextNode = curNode->nextNode;
	while (curNode->nextNode != nullptr) {
		curNode->nextNode = prevNode;
		prevNode = curNode;
		curNode = nextNode;
		nextNode = curNode->nextNode;
	}
	curNode->nextNode = prevNode;
	head = curNode;
}