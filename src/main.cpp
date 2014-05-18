#include <iostream>

#include "LinkedList.cpp"
#include "Node.cpp"

int main(int argc, char *argv[])
{
	LinkedList<int> list;

	list.insert(4);
	list.insert(5);
	list.insert(6);

	Node<int>* node = list.getFirst();
	for (int i = 0; i < 3; i++) {
		std::cout << node->getData() << std::endl;
		node = list.getAfter(node);
	}

	return 0;
}
