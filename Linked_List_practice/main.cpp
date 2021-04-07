#include <iostream>
#include "singlyLinkedList.h"

int main() {
	singlyLinkedList stackList;
	singlyLinkedList* heapList = new singlyLinkedList();
	

	heapList->prepend(3);
	stackList.prepend(2);

	heapList->printList();
	std::cout << "\n";
	stackList.printList();
	std::cout << "\n";


	heapList->insert(2, 3);
	stackList.insert(4, 2);

	heapList->printList();
	std::cout << "\n";
	stackList.printList();
	std::cout << "\n";

	heapList->deleteNode(1);

	heapList->printList();
	std::cout << "\n";

	delete heapList;
	return 0;
}