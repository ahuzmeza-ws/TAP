/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp         										╦ ╦╔╦╗╔═╗╔═╗╔╦╗   */
/*                            								║ ║║║║╠╣ ╚═╗ ║    */
/*   By: alinhuzmezan            							╚═╝╩ ╩╚  ╚═╝ ╩    */
/*                                                       George Emil Palade   */
/*   Created: 2021/01/05 15:25 by alinhuzmezan                                */
/*   Updated: 2021/01/05 17:23 by alinhuzmezan                                */
/*                                                                            */
/* ************************************************************************** */

#include "book.h"

#include <iostream>
using namespace std;

int 	main()
{
	Book c[111];
	int n = 2;
	string author;

	c[0].setAuthor("a");
	c[0].setTitle("aa");
	c[0].setISBN(123456789);
	c[0].setPrice(0);

	c[1].setAuthor("b");
	c[1].setTitle("bb");
	c[1].setISBN(789456123);
	c[1].setPrice(1);

	c[2].setAuthor("c");
	c[2].setTitle("cc");
	c[2].setISBN(987654321);
	c[2].setPrice(2);

	cout << "Author: ";
	cin >> author;

	for (int i = 0; i < n; i++)
	{
		if (c[i].getAuthor() == author)
		{
			cout << author << endl;
			cout << c[i].getTitle() << endl;
			cout << c[i].getISBN() << endl;
			cout << c[i].getPrice() << endl;
			cout << endl;
		}
	}

	cout <<"NbOf instances = " << c[1].get_nbOf_instances() <<endl;

	return (0);
}

