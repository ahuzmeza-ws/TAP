/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp         										╦ ╦╔╦╗╔═╗╔═╗╔╦╗   */
/*                            								║ ║║║║╠╣ ╚═╗ ║    */
/*   By: alinhuzmezan            							╚═╝╩ ╩╚  ╚═╝ ╩    */
/*                                                       George Emil Palade   */
/*   Created: 2021/01/08 23:38 by alinhuzmezan                                */
/*   Updated: 2021/01/09 00:20 by alinhuzmezan                                */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include <fstream>
#include <string>
#include <algorithm> // for sort()
using namespace std;

ifstream fin("./IO_files/file.in");
ofstream fout("./IO_files/file.out");

/*
bool 	cmp_alpha(string a, string b) {
	// ret 1
	// if string a is alphabetically less than string b
	return (a<b);
}
list<string> alphaSort(list<string> _list) {

	sort(_list.begin(), _list.end(), cmp_alpha);
	return (_list);
}

bool 	cmp_rev_alpha(string a, string b) {
	// ret 1
	// if string a is alphabetically greater than string b
	return (a<b);
}
list<string> rev_alphaSort(list<string> _list) {

	sort(_list.begin(), _list.end(), cmp_rev_alpha);
	return (_list);
}
*/
bool 	cmp_length(string a, string b) {
	// ret 1
	// if string a is alphabetically greater than string b
	return (a.length() < b.length());
}
list<string> lengthSort(list<string> _list) {

	sort(_list.begin(), _list.end(), cmp_length);
	return (_list);
}

void 	printList(list<string> lines) {

	list<string>::iterator it = lines.begin();
	while (it != lines.end())
	{
		fout << *it <<'\n';
	it++;
	}
}

int 	main()
{
	list<string> 	lines;
	string 			line;

	while (getline(fin, line))
		lines.push_back(line);

	//lines = alphaSort(lines);
	fout <<"----- Alpha ordered: \n";
	printList(lines);

	//lines = rev_alphaSort(lines);
	fout <<"----- Alpha ordered: \n";
	printList(lines);

	lines = lengthSort(lines);
	fout <<"----- Alpha ordered: \n";
	printList(lines);

	fout<<"\n\n";
	return (0);
}

