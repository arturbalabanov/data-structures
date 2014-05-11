#include "Node.h"

template<class T>
Node<T>::Node(const T& data, Node<T>* next)
{
	this->data = data;
	this->next = next;
}

template<class T>
Node<T>*Node<T>::nextNode()
{
	return this->next;
}

template<class T>
void Node<T>::insertAfter(Node<T>* p)
{
	p->next = this->next;
	this->next = p;
}

template<class T>
Node<T>* Node<T>::deleteAfter()
{
	Node<T>* tmp = this->next;
	if (this->next != NULL) {
		this->next = this->next->next;
	}

	return tmp;
}

template<class T>
Node<T>* getNode(const T& data, Node<T>* next=NULL)
{
	Node<T>* new_node;
	new_node = new Node<T>(data, next);
	if (new_node == NULL) {
		std::cerr << "Memory allocation failed.\n";
		exit(EXIT_FAILURE);
	}
	return new_node;
}

