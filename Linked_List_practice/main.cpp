#include <iostream>
#include "singlyLinkedList.h"

int main() {
	singlyLinkedList stackList;
	singlyLinkedList* heapList = new singlyLinkedList();
	

	heapList->prepend(3);
	stackList.prepend(2);

	std::cout << "prepends:\n";

	heapList->printList();
	std::cout << "\n";
	stackList.printList();
	std::cout << "\n";


	std::cout << "appends:\n";
	heapList->append(3);
	heapList->append(12);
	stackList.append(5);
	stackList.append(8);

	heapList->printList();
	std::cout << "\n";
	stackList.printList();
	std::cout << "\n";

	std::cout << "insert:\n";

	heapList->insert(2, 3);
	stackList.insert(4, 2);

	heapList->printList();
	std::cout << "\n";
	stackList.printList();
	std::cout << "\n";

	std::cout << "count:\n";

	std::cout << heapList->countLength();
	std::cout << "\n";
	std::cout << stackList.countLength();
	std::cout << "\n";

	std::cout << "iterative Search:\n";
	
	std::cout << heapList->iterativeSearch(3) << "\n";
	std::cout << stackList.iterativeSearch(5) << "\n";
	std::cout << heapList->iterativeSearch(21) << "\n";
	std::cout << stackList.iterativeSearch(21) << "\n";

	std::cout << "recursive search:\n";

	std::cout << heapList->recursiveSearch(3) << "\n";
	std::cout << stackList.recursiveSearch(5) << "\n";
	std::cout << heapList->recursiveSearch(21) << "\n";
	std::cout << stackList.recursiveSearch(21) << "\n";

	std::cout << "reverse list:\n";

	heapList->reverseList();
	stackList.reverseList();

	heapList->printList();
	std::cout << "\n";
	stackList.printList();
	std::cout << "\n";

	std::cout << "delete node:\n";
	heapList->deleteNode(1);
	stackList.deleteNode(1);

	heapList->printList();
	std::cout << "\n";
	stackList.printList();
	std::cout << "\n";

	std::cout << "delete whole list:\n";

	heapList->deleteList();
	stackList.deleteList();

	heapList->printList();
	std::cout << "\n";
	stackList.printList();
	std::cout << "\n";


	delete heapList;
	return 0;
}