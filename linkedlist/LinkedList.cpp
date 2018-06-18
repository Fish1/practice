#include "LinkedList.hpp"

#include <iostream>

LinkedList::LinkedList()
{

}

void LinkedList::push_back(int data)
{
	Node * current = m_first;

	Node * new_node = new Node(data);;

	if(current == nullptr)
	{
		m_first = new_node;
	}
	else
	{
		while(current->m_next != nullptr)
		{
			current = current->m_next;
		}

		current->m_next = new_node;
	}
}

int LinkedList::at(unsigned int index)
{
	Node * current = m_first;

	for(unsigned int current_index = 0; current_index < index; ++current_index)
	{
		if(current->m_next == nullptr)
		{
			std::cout << "Access Error: out of range" << std::endl;

			return 0;
		}

		current = current->m_next;	
	}

	return current->m_data;
}
