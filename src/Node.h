#ifndef NODE_H
#define NODE_H

#include <iostream> // cerr, NULL
#include <cstdlib> // exit, EXIT_FAILURE

template<class T>
class Node
{
private:
	T data;

public:
	Node<T>* next;

	Node(const T& data, Node<T>* next);
	Node(const T& data);
	T getData();
};

#endif
