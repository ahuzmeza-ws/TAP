/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp         										╦ ╦╔╦╗╔═╗╔═╗╔╦╗   */
/*                            								║ ║║║║╠╣ ╚═╗ ║    */
/*   By: alinhuzmezan            							╚═╝╩ ╩╚  ╚═╝ ╩    */
/*                                                       George Emil Palade   */
/*   Created: 2021/01/02 23:29 by alinhuzmezan                                */
/*   Updated: 2021/01/03 00:06 by alinhuzmezan                                */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <iterator>
#include <set>
using namespace std;

ifstream fin("./io_Files/words.in");
ofstream fout("./io_Files/words.out");

int		main()
{
	set<string> s;
	string		word;

	// read ifstream word by word into set s
	cout <<"================================\nin:\n\n";
    while (fin >> word)
	{
		s.insert(word);
		clog << word <<'\n';
	}

	// print set s
	cout <<"================================\nout:\n\n";
	for (set<string>::iterator it = s.begin(); it != s.end(); it++)
		cout << *it <<'\n';

	return (0);
}
