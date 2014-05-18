#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream> // cerr, NULL
#include <cstdlib> // exit, EXIT_FAILURE

#include "Node.h"

template<class T>
class LinkedList
{
private:
	Node<T>* first;
	Node<T>* last;
	int size;

public:
	LinkedList();
	void insertAfter(Node<T>* prev, const T& value);
	void insert(const T& value);
	Node<T>* deleteAfter(Node<T>* node);
	Node<T>* getAfter(Node<T>* node);
	Node<T>* getFirst();
	Node<T>* getLast();
	int getSize();
	bool isEmpty();
};

#endif
