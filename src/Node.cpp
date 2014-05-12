#include "Node.h"

template<class T>
Node<T>::Node(const T& data, Node<T>* next)
{
	this->data = data;
	this->next = next;
}

template<class T>
Node<T>::Node(const T& data)
{
	this->data = data;
	this->next = NULL;
}

template<class T>
T Node<T>::getData()
{
	return this->data;
}
