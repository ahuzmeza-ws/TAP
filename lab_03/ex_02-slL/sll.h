/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   sll.h        										   ╦ ╦╔╦╗╔═╗╔═╗╔╦╗    */
/*                                                         ║ ║║║║╠╣ ╚═╗ ║     */
/*                                                         ╚═╝╩ ╩╚  ╚═╝ ╩     */
/*                                                      George Emil Palade    */
/*   Created: 2020/12/14 00:13 by alinhuzmezan                                */
/*   Updated: 2020/12/14 01:58 by alinhuzmezan                                */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SLL_H
#define SLL_H

// Node class ================================================================= 
class Node {

private: 
	int info;
	Node* next;

public:
	Node(int info = 0);
	Node(const Node&);
	~Node();

	friend class SLL;

	int 	getInfo() const;
	void 	setInfo(int value);
	Node* 	getSucc() const;
	void 	setSucc(Node* value);
};

// LSI ========================================================================
class SLL {

private:
	Node* Head;

public:
	SLL();
	SLL(Node *);
	SLL(const SLL &);
	~SLL();

	Node* 	getLIST();
	void 	setLIST(Node*);
	
	void 	sl_create(int);
	void 	sl_print();
	void 	sl_pushFirst(int);
	void 	sl_pushLast(int);
	void 	sl_popFirst();
	void 	sl_popLast();
	// (..)
};

#endif

