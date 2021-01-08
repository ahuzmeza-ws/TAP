/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   animal.h         										╦ ╦╔╦╗╔═╗╔═╗╔╦╗   */
/*                            								║ ║║║║╠╣ ╚═╗ ║    */
/*   By: alinhuzmezan            							╚═╝╩ ╩╚  ╚═╝ ╩    */
/*                                                       George Emil Palade   */
/*   Created: 2021/01/08 16:40 by alinhuzmezan                                */
/*   Updated: 2021/01/08 17:49 by alinhuzmezan                                */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>

using namespace std;

class Animal {

private:
	string 	species;
	int 	age;

public:

	virtual void heterotrof();

	string 	getSpecies() { return (species); }
	void 	setSpecies(string _species) { this->species = _species; }

	int 	getAge() { return age; }
	void 	setAge(int _age) { this->age = _age; }
};

// =====================================

class Mamal : public Animal {

private:
	int 	length; 

public:
	Mamal();
	Mamal(string, int);
	Mamal(Mamal&);
	~Mamal();

	void 	birth();

	int 	getLength();
	void 	setLength(int);
};

class Bird : public Animal {

private: 
	int 	nbOfFeathers; 

public:
	Bird();
	Bird(string, int);
	Bird(Bird&);
	~Bird();

	void 	fly();

	int 	getFeathers();
	void 	setFeathers(int);
};

// =====================================

class Reptila : public Animal {

public:
	Reptila();
	Reptila(string, int);
	Reptila(Reptila&);
	~Reptila();
};

// =====================================

class Platipus : public Reptila, public Bird {

public:
	Platipus();
	Platipus(string, int);
	Platipus(Platipus&);
	~Platipus();
	
	// metoda proprie
	void 	amfibiu();
};

#endif // !_ANIMAL_H
