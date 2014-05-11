#ifndef NODE_H
#define NODE_H

#include <iostream> // cerr, NULL
#include <cstdlib> // exit, EXIT_FAILURE

template<class T>
class Node
{
private:
	Node<T>* next;
	T data;

public:
	Node(const T& data, Node<T>* next=NULL);
	Node<T>* nextNode();
	void insertAfter(Node<T>* p);
	Node<T>* deleteAfter();
	Node<T>* getNode(const T& data, Node<T>* next=NULL);
};

#endif // NODE_H
