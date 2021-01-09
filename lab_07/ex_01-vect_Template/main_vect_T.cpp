/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main_vect_T.c    										╦ ╦╔╦╗╔═╗╔═╗╔╦╗   */
/*                            								║ ║║║║╠╣ ╚═╗ ║    */
/*   By: alinhuzmezan            							╚═╝╩ ╩╚  ╚═╝ ╩    */
/*                                                       George Emil Palade   */
/*   Created: 2020/12/30 23:15 by alinhuzmezan                                */
/*   Updated: 2021/01/08 20:13 by alinhuzmezan                                */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

template<class T>
T 	maxim(T* v, int n)
{
	T maxim = -9999;
	for (unsigned int i = 0; i < n; i++)
		if (v[i] > maxim)
			maxim = v[i];
		
	return (maxim);
}

template<class T>
T 	minim(T* v, int n)
{
	T minim = 9999;
	for (unsigned int i = 0; i < n; i++)
		if (v[i] < minim)
			minim = v[i];
		
	return (minim);
}

template<class T>
T 	secv_search(T* v, int n, T needle)
{
	for (unsigned int i = 0; i < n; i++)
		if (v[i] == needle)
			return (i); 
		
	return (-1); 
}

template<class T>
T 	cautare_binara(T* v, T left, T right, T needle)
{
	if (right >= left)
	{
		T mijloc = (right + left) / 2; 

		if (v[mijloc] == needle)
			return (mijloc);

		if (v[mijloc] > needle) 
			return (cautare_binara(v, left, mijloc - 1, needle));
		else 
			return (cautare_binara(v, mijloc + 1, right, needle));
	}
	return (-1); 
}

template<class T>
void 	bubble_sort(T* v, int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (v[i] > v[j])
			{
				T aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
}


int 	main()
{
	int v[20];
	int n = 20;

	for (int i = n-1; i >= 0; i--)
	{
		v[i] = i;
	}

	cout << "Max: " << maxim(v, n) <<'\n';
	cout << "Min: " << minim(v, n) <<'\n';
	cout << "Index of 7 (secv): " << secv_search(v, n, 7) <<'\n';
	cout << "Index of 7 (bin): " << cautare_binara(v, 0, n, 7) <<'\n';
	cout << "Sorted: \n";
	bubble_sort(v, n);

	// print
	for (int i = 0; i < n; i++)
	{
		cout << v[i] << " ";
	}
	
	cout<<"\n\n";
	
	return (0);
}
		
