/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp         										╦ ╦╔╦╗╔═╗╔═╗╔╦╗   */
/*                            								║ ║║║║╠╣ ╚═╗ ║    */
/*   By: alinhuzmezan            							╚═╝╩ ╩╚  ╚═╝ ╩    */
/*                                                       George Emil Palade   */
/*   Created: 2021/01/08 23:38 by alinhuzmezan                                */
/*   Updated: 2021/01/08 23:48 by alinhuzmezan                                */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

ifstream fin("./IO_files/file.in");
ofstream fout("./IO_files/file.out");

void 	print_underscoreLine(size_t length);
void 	add_spacesAndEndChar(vector<string>::iterator &it, size_t max_length);

int 	main()
{
	vector<string> 	lines;
	string 			line;
	size_t 			max_length = 0; // max length of lines

	while (getline(fin, line)) 
	{
		line = "|" + line; // add '|' to front of every read line

		
		size_t currentLine_length = line.length();
		if (currentLine_length > max_length)
			max_length = currentLine_length;
		
		lines.push_back(line); // add line to vector 'lines'
	}

	// print
	print_underscoreLine(max_length);
	fout <<'\n';
	
	vector<string>::iterator it;
	for (it = lines.begin(); it != lines.end(); it++)
	{		
		// add "_spaces_"+'|' at end of every line
		add_spacesAndEndChar(it, max_length);
		
		// print current line
		fout << *it;
		
		// print |___| line separator
		fout << "|";
		print_underscoreLine(max_length - 1);
		fout << "|\n";
	}

	return (0);
}

void 	print_underscoreLine(size_t length)
{
	while (length--)
		fout <<'_';
}

void 	add_spacesAndEndChar(vector<string>::iterator &it, size_t max_length)
{
	size_t currentLine_length = (*it).size();
	string spaces;
	
	for (unsigned int i = 1; i <= (max_length - currentLine_length); i++)
			spaces += " ";
	
	// add spaces to current_line (it)
	*it = *it + spaces + "|\n";
}

