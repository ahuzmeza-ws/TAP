#include "StaticStack.h"
#include <iostream>
using namespace std;

// constructor
Array_Stack:: Array_Stack(int max) {
	
	Array_Stack::max = max;
	Array_Stack::top = 0;
	Array_Stack::vector = new int[max];
}

// destructor
Array_Stack:: ~Array_Stack() {

	Array_Stack::max = 0;
	Array_Stack::top = 0;
	delete [] Array_Stack::vector;
}

bool 	Array_Stack::isempty()
{ return (this->top < 0); }

bool	Array_Stack::isfull()
{ return (this->top >= max); }

void 	Array_Stack::push(int new_elem) 
{
	if (isfull())
		cout <<"Stack already full...\n";
	else
	{
		top = new_elem;
		top++;
	}
}

int		Array_Stack::pop()
{
	if (isempty())
	{
		cout <<"Stack is empty... \n";
		return (0x3f3f3f3f); // -maxInt return error value
	}
	else
	{
		int removed_elem = vector[top - 1];
		top--;
		return (removed_elem);
	}
}

int 	Array_Stack::peak()
{
	return (vector[top - 1]);
}

void 	Array_Stack::print()
{
	if (top > 0)
	for (unsigned int i = 0; i < top; i++)
		cout << vector[i] <<" ";
	cout<<"\n";
}
