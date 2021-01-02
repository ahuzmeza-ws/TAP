/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   vector_T.cpp     										╦ ╦╔╦╗╔═╗╔═╗╔╦╗   */
/*                            								║ ║║║║╠╣ ╚═╗ ║    */
/*   By: alinhuzmezan            							╚═╝╩ ╩╚  ╚═╝ ╩    */
/*                                                       George Emil Palade   */
/*   Created: 2020/12/30 02:51 by alinhuzmezan                                */
/*   Updated: 2020/12/30 23:15 by alinhuzmezan                                */
/*                                                                            */
/* ************************************************************************** */

//
//  matrix.cpp
//  workspace_C++
//
//  Created by Alin Huzmezan on 29.12.2020.
//  Copyright © 2020 Alin Huzmezan. All rights reserved.
//

#include "vector_T.h"

#include <iostream>
using namespace std;

template<class T>
Node<T>::	Node()
{
	info = nullptr;
	next = nullptr;
}

template<class T>
Node<T>::	Node(T _info)
{
	info = _info;
	next = nullptr;
}

template<class T>
Node<T>::	Node(const Node& other):info(other.info)
{}

template<class T>
Node<T>::	~Node()
{}

template<class T>
T Node<T>::getInfo() const
{
	return info;
}

template<class T>
void Node<T>::	setInfo(T value)
{
	info = value;
}

template<class T>
Node<T>* Node<T>::	getSucc() const
{
	return (next);
}

template<class T>
void Node<T>::	setSucc(Node<T>* value)
{
	next = value;
}

// ==========================================
template<class T>
SLL<T>::	SLL()
{
	Head = nullptr;
}

template<class T>
SLL<T>::	SLL(Node<T>* LIST)
{
	Head(LIST);
}

template<class T>
SLL<T>::	SLL(const SLL& _other)
{
	Head = _other.Head;
}

template<class T>
SLL<T>::	~SLL()
{
	while(Head != NULL)
	{
        Node<T> *tmp = Head->next;
        delete Head;
        Head = tmp;
    }

}

template<class T>
Node<T>* SLL<T>::	getLIST()
{
	return (Head);
}

template<class T>
void SLL<T>::	setLIST(Node<T>* value)
{
	Head = value;
}

// -------------------------------
template<class T>
void 	SLL<T>::	sl_create(T info_new)
{
	Node<T>* nou = new Node<T>;
	nou->info = info_new;
	nou->next = nullptr;

	Head = nou;
}

template<class T>
void 	SLL<T>::	sl_print()
{
	if (Head == NULL)
	{
		cout <<"Emtpy list..\n";
		return;
	}
	else
	{
		Node<T>* tmp = Head;

		while (tmp != NULL)
		{
			cout << tmp->info << " ";
			tmp = tmp->next;
		}
	}
}

template<class T>
void	 SLL<T>::	sl_pushFirst(T info_new)
{
	Node<T>* nou = new Node<T>(info_new);
	if (Head == nullptr)
	{
		Head = nou;
	}
	else
	{
		nou->next = Head;
		Head = nou;
	}
}

template<class T>
void 	SLL<T>::	sl_pushLast(T info_new)
{
	if (Head == NULL)
	{
		sl_create(info_new);
	}
	else
	{
		Node<T>* current = Head;
		while (current->next != NULL)
			current = current->next;

		current->next = new Node<T>();
		current->next->info = info_new;
		current->next->next = NULL;
	}
}

template<class T>
void 	SLL<T>::	sl_popFirst()
{
	Node<T>* toDelptr = Head;

	if (toDelptr == NULL)
	{
		cout <<"Emtpy list..\n";
		return;
	}
	// if head is unique element
    else if (toDelptr->next == NULL)
    {
        Head = NULL;
        free(Head);           // free old head
    }
    else
		Head = toDelptr->next; // make head of list second element
	free(toDelptr);  // Clears the memory occupied by first node
}

template<class T>
void 	SLL<T>::	sl_popLast()
{
	Node<T>* toDelptr = Head;

	if(toDelptr == NULL)			// no elements in list
	{
		cout <<"Emtpy list..\n";
		return;
	}
	else if(toDelptr->next == NULL) // only one element in list
	{
		Head = NULL;
		free(Head);
	}
	else 							// general case, 2+ elements in list
	{
		while(toDelptr->next->next != NULL) // get to second to last element
			toDelptr = toDelptr->next;

		Node<T>* temp = toDelptr;
		toDelptr = toDelptr->next; // go to last element
		temp->next = NULL;	       // make second to last as last
	}
	free(toDelptr);
}

