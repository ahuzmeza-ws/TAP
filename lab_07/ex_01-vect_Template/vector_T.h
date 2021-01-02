/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   vector_T.h       										╦ ╦╔╦╗╔═╗╔═╗╔╦╗   */
/*                            								║ ║║║║╠╣ ╚═╗ ║    */
/*   By: alinhuzmezan            							╚═╝╩ ╩╚  ╚═╝ ╩    */
/*                                                       George Emil Palade   */
/*   Created: 2020/12/30 23:13 by alinhuzmezan                                */
/*   Updated: 2020/12/30 23:14 by alinhuzmezan                                */
/*                                                                            */
/* ************************************************************************** */

//
//  matrix.h
//  workspace_C++
//
//  Created by Alin Huzmezan on 29.12.2020.
//  Copyright © 2020 Alin Huzmezan. All rights reserved.
//

#ifndef vector_T_h
#define vector_T_h

#include <iostream>
using namespace std;

// Node class ==================================================================
template<class T>
class Node {

private:
	T 	  info;
	Node* next;

public:
	Node();
	Node(T info = 0);
	Node(const Node&);
	~Node();

	T 	getInfo() const;
	void 	setInfo(T value);
	Node* 	getSucc() const;
	void 	setSucc(Node* value);
};

// LSI =========================================================================
template<class T>
class SLL {

private:
	Node<T> *Head;

public:
	SLL();
	SLL(Node<T> *);
	SLL(const SLL &);
	~SLL();

	Node<T> *getLIST();
	void 	setLIST(Node<T> *);

	void 	sl_create(T);
	void 	sl_print();
	void 	sl_pushFirst(T);
	void 	sl_pushLast(T);
	void 	sl_popFirst();
	void 	sl_popLast();
	// (..)
};

#endif

