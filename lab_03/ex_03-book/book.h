/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   book.h           										╦ ╦╔╦╗╔═╗╔═╗╔╦╗   */
/*                            								║ ║║║║╠╣ ╚═╗ ║    */
/*   By: alinhuzmezan            							╚═╝╩ ╩╚  ╚═╝ ╩    */
/*                                                       George Emil Palade   */
/*   Created: 2021/01/05 15:25 by alinhuzmezan                                */
/*   Updated: 2021/01/05 17:22 by alinhuzmezan                                */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BOOK_H
#define BOOK_H

#include <iostream>
using namespace std;

class Book {

private:
	string author;
	string title;
	int ISBN;
	float price;
	static int nbOf_instances;

public:
	Book() { ++nbOf_instances; }
	Book(string, string, int, float);
	Book(const Book&);
	~Book() { --nbOf_instances; }
	
	// get
	int 		get_nbOf_instances() 	  { return (nbOf_instances); }
	inline string 	getAuthor() const	  { return (author); }
	inline string	getTitle() const	  { return (title); }
	inline int		getISBN() const 	  { return (ISBN); }
	inline float	getPrice() const	  { return (price); }
	// set
	inline void  	setAuthor(string _author) { author = (_author); }
	inline void  	setTitle(string _title)   { title = (_title); }
	inline void  	setISBN(int _ISBN) 		  { ISBN = (_ISBN); }
	inline void  	setPrice(float _price) 	  { price = (_price); }

};

#endif

