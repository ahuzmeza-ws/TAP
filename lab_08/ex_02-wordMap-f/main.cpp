/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp         										╦ ╦╔╦╗╔═╗╔═╗╔╦╗   */
/*                            								║ ║║║║╠╣ ╚═╗ ║    */
/*   By: alinhuzmezan            							╚═╝╩ ╩╚  ╚═╝ ╩    */
/*                                                       George Emil Palade   */
/*   Created: 2021/01/03 00:39 by alinhuzmezan                                */
/*   Updated: 2021/01/03 01:08 by alinhuzmezan                                */
/*                                                                            */
/* ************************************************************************** */

// Using STL map
// read words from file
// (map word to wordcount)

#include <iostream>
#include <fstream>
#include <iterator>
#include <map>
using namespace std;

ifstream fin("./io_Files/words.in");
ofstream fout("./io_Files/words.out");

int		main()
{
	map<string, int> s;
	string			 word;

	// read ifstream word by word into set s
	cout <<"================================\nin:\n\n";

	int		cnt;

	cnt = 1;
    while (fin >> word)
	{
		clog << cnt <<": "<<  word <<'\n';
		
		// create pair of map and bool
		pair <map <string,int>::iterator, bool> retValue;

		// insert element
        retValue = s.insert( pair<string,int>(word, cnt) );

        // check if map contains value
        if ( retValue.second == false)
        {
            // element already exists
            ++retValue.first->second;
		}
	}

	// print set s
	cout <<"================================\nout:\n\n";
	for (map<string, int>::iterator it = s.begin(); it != s.end(); it++)
		cout << it->first <<"\t["<< it->second << '\n';

	cout <<"\n\n";

	return (0);
}
