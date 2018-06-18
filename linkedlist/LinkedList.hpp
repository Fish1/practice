#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

#include "Node.hpp"

class LinkedList
{
private:

	Node * m_first = nullptr;

public:

	LinkedList();

	void push_back(int data);

	int at(unsigned int index);
};

#endif
