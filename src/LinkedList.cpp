#include "LinkedList.h"

template<class T>
LinkedList<T>::LinkedList()
{
	this->first = NULL;
	this->last = NULL;
	this->size = 0;
}

template<class T>
void LinkedList<T>::insertAfter(Node<T>* prev, const T& value)
{
	Node<T> node(value);
	if (prev != this->last) {
		node.next = prev->next;
	} else {
		this->last = &node;
	}
	prev->next = &node;
	this->size++;
}

template<class T>
void LinkedList<T>::insert(const T& value)
{
	if (this->first == NULL) {
		Node<T> node(value);
		this->first = &node;
		this->last = &node;
		this->size++;
	} else {
		this->insertAfter(this->last, value);
	}
}

template<class T>
Node<T>* LinkedList<T>::deleteAfter(Node<T>* node)
{
	if (node == this->last) {
		std::cerr << "Cannot remove after the last element.\n";
		exit(EXIT_FAILURE);
	} else if (this->size == 0) {
		std::cerr << "There are no items in the list.\n";
		exit(EXIT_FAILURE);
	}

	Node<T>* removed = node->next;
	node->next = node->next->next;
	this->size--;

	return removed;
}

template<class T>
Node<T>* LinkedList<T>::getAfter(Node<T>* node)
{
	if (node == this->last) {
		std::cerr << "There are no items after the last one.\n";
		exit(EXIT_FAILURE);
	} else if (this->size == 0) {
		std::cerr << "There are no items in the list.\n";
		exit(EXIT_FAILURE);
	}

	return node->next;
}

template<class T>
int LinkedList<T>::getSize()
{
	return this->size;
}

template<class T>
Node<T>* LinkedList<T>::getFirst()
{
	return this->first;
}

template<class T>
Node<T>* LinkedList<T>::getLast()
{
	return this->last;
}
