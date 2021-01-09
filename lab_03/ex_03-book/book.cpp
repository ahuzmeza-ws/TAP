/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   book.cpp         										╦ ╦╔╦╗╔═╗╔═╗╔╦╗   */
/*                            								║ ║║║║╠╣ ╚═╗ ║    */
/*   By: alinhuzmezan            							╚═╝╩ ╩╚  ╚═╝ ╩    */
/*                                                       George Emil Palade   */
/*   Created: 2021/01/05 15:25 by alinhuzmezan                                */
/*   Updated: 2021/01/05 17:18 by alinhuzmezan                                */
/*                                                                            */
/* ************************************************************************** */

#include "book.h"

int Book::nbOf_instances = 0;

Book::Book(string _author, string _tile, int _ISBN, float _price)
{
	author = _author;
	title = _tile;
	price = _price;
	ISBN = _ISBN;
	
	nbOf_instances++;
}

Book::Book(const Book& other)
{
	this->author = other.author;
	this->title = other.title;
	this->ISBN = other.ISBN;
	this->price = other.price;

	nbOf_instances++;
}

