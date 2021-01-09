/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   sll.cpp      										   ╦ ╦╔╦╗╔═╗╔═╗╔╦╗    */
/*                                                         ║ ║║║║╠╣ ╚═╗ ║     */
/*                                                         ╚═╝╩ ╩╚  ╚═╝ ╩     */
/*                                                      George Emil Palade    */
/*   Created: 2020/12/14 00:12 by alinhuzmezan                                */
/*   Updated: 2020/12/14 01:58 by alinhuzmezan                                */
/*                                                                            */
/* ************************************************************************** */

#include "sll.h"

#include <iostream>
using namespace std;

Node::Node(int _info)
{
	info = _info;
	next = nullptr;
}

Node::Node(const Node& other):info(other.info)
{}

Node::~Node()
{}

int Node::getInfo() const
{
	return info;
}

void Node::setInfo(int value)
{
	info = value;
}

Node* Node::getSucc() const
{
	return next;
}

void Node::setSucc(Node* value)
{
	next = value;
}

// ==========================================
SLL::SLL()
{}

SLL::SLL(Node* LIST):Head(LIST)
{}

SLL::SLL(const SLL& other):Head(other.Head)
{}

SLL::~SLL()
{}

Node* SLL::getLIST()
{
	return Head;
}

void SLL::setLIST(Node* value)
{
	Head = value;
}

// -------------------------------
void 	SLL::sl_create(int info_new)
{
	Node* nou = new Node;
	nou->info = info_new;
	nou->next = nullptr;
	
	Head = nou;
}

void 	SLL::sl_print()
{
	if (Head == NULL)
	{
		cout <<"Emtpy list..\n";
		return;
	}
	else
	{
		Node* tmp = Head;

		while (tmp != NULL)
		{
			cout << tmp->info << " ";
			tmp = tmp->next;
		}
	}
}

void	 SLL::sl_pushFirst(int info_new)
{
	Node* nou = new Node(info_new);
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

void 	SLL::sl_pushLast(int info_new)
{
	if (Head == NULL)
	{
		sl_create(info_new);
	}
	else
	{
		Node* current = Head;
		while (current->next != NULL)
			current = current->next;

		current->next = new Node();
		current->next->info = info_new;
		current->next->next = NULL;
	}
}

void 	SLL::sl_popFirst()
{
	Node* toDelptr = Head;

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

void 	SLL::sl_popLast()
{
	Node* toDelptr = Head;

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

		Node* temp = toDelptr;
		toDelptr = toDelptr->next; // go to last element
		temp->next = NULL;	       // make second to last as last
	}
	free(toDelptr);
}

