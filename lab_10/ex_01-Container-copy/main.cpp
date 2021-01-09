/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp         										╦ ╦╔╦╗╔═╗╔═╗╔╦╗   */
/*                            								║ ║║║║╠╣ ╚═╗ ║    */
/*   By: alinhuzmezan            							╚═╝╩ ╩╚  ╚═╝ ╩    */
/*                                                       George Emil Palade   */
/*   Created: 2021/01/09 15:21 by alinhuzmezan                                */
/*   Updated: 2021/01/09 16:25 by alinhuzmezan                                */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <deque>
#include <list>
#include <vector>
using namespace std;

/*
*	deque<int> vector<int> list<int>
*	cannot be initialized with an initializer list
*/

int 	main()
{
	cout <<'\n';

	// containers
	deque<int> 	d; /* { 3, 6, 9 } */
	d.insert( d.begin(),   3);
	d.insert( d.begin()+1, 6);
	d.insert( d.begin()+2, 9);

	vector<int> v; /* { 2, 4, 6, 8, 10 } */
	v.insert( v.begin(),   2);
	v.insert( v.begin()+1, 4);
	v.insert( v.begin()+2, 6);
	v.insert( v.begin()+2, 8);
	v.insert( v.begin()+2, 10);

	list<int> 	l; /* { -10, -9, -8, -7, 	-6, -5, -4, -3, -2, -1 } */
	l.insert( l.begin(),   -10);
	l.insert( next(l.begin(), 1),  -10);
	l.insert( next(l.begin(), 2),  -9);
	l.insert( next(l.begin(), 3),  -8);
	l.insert( next(l.begin(), 4),  -7);
	l.insert( next(l.begin(), 5),  -6);
	l.insert( next(l.begin(), 6),  -5);
	l.insert( next(l.begin(), 7),  -4);
	l.insert( next(l.begin(), 8),  -3);
	l.insert( next(l.begin(), 9),  -2);
	l.insert( next(l.begin(), 10), -1);

	// iterator for printing
	list<int>::iterator it;

// a) --------------------------------------------------------------------------
	list   <int> rez_a;

	cout <<"a) ";
	// + '3 6 9'
	copy( d.begin(), d.end(), back_inserter(rez_a));
	// + '2 4 6 8 10'
	copy( v.begin(), v.end(), back_inserter(rez_a));

	// print
	for (it = rez_a.begin(); it != rez_a.end(); it++)
		cout << *it <<" ";
	cout <<'\n';
// c) --------------------------------------------------------------------------
	list  <int> rez_c;
	list  <int> l_rev;
	reverse_copy( l.begin(), l.end(), back_inserter(l_rev));
	// => -1 -2 -3 -4 -5 -6 -7 -8 -9 -10

	cout <<"c) ";
	// + '2 4 6 8'
	copy( v.begin(), v.begin() + 4, back_inserter(rez_c));
	// + '-1 -2 -3 -4'
	copy( l_rev.begin(), next(l_rev.begin(), 4), back_inserter(rez_c));
	// + '10'
	copy( v.begin()+4, v.end(),	back_inserter(rez_c));
	// + '3 6'
	copy( d.begin(), d.begin()+2, back_inserter(rez_c));
	// + '-5 -6 -7'
	copy( next(l_rev.begin(), 4), next(l_rev.begin(), 7), back_inserter(rez_c));
	// + '9'
	copy( next(d.begin(),2), d.end(), back_inserter(rez_c));
	// + '-8 -9 -10'
	copy( next(l_rev.begin(), 7), next(l_rev.begin(), 10), back_inserter(rez_c));

	// print
	for (it = rez_c.begin(); it != rez_c.end(); it++)
		cout << *it <<" ";

	cout <<"\n\n";
	return (0);
}

