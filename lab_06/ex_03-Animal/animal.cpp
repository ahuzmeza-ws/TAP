/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   animal.cpp       										╦ ╦╔╦╗╔═╗╔═╗╔╦╗   */
/*                            								║ ║║║║╠╣ ╚═╗ ║    */
/*   By: alinhuzmezan            							╚═╝╩ ╩╚  ╚═╝ ╩    */
/*                                                       George Emil Palade   */
/*   Created: 2021/01/08 16:40 by alinhuzmezan                                */
/*   Updated: 2021/01/08 17:49 by alinhuzmezan                                */
/*                                                                            */
/* ************************************************************************** */

#include "animal.h"

void Animal::heterotrof()
{
	cout <<"heterotrof "<<'\n';
}

// =====================================

Mamal::Mamal(){}

Mamal::Mamal(string _species, int _age)
{
	this->setSpecies(_species);
	this->setAge(_age);
}

Mamal::Mamal( Mamal& other)
{
	this->setSpecies(other.getSpecies());
	this->setAge(other.getAge());
}

Mamal::~Mamal()
{}

void Mamal::birth()
{
	cout <<"birth"<<'\n';
}

int Mamal::getLength()
{
	return (length);
}

void Mamal::setLength(int _length)
{
	this->length = _length;
}

// =====================================

Bird::Bird(){}

Bird::Bird(string _species, int _age)
{
	this->setSpecies(_species);
	this->setAge(_age);
}

Bird::Bird(Bird& other)
{
	this->setSpecies(other.getSpecies());
	this->setAge(other.getAge());
}

Bird::~Bird()
{}

void Bird::fly()
{
	cout <<"is flying " <<'\n';
}

int Bird::getFeathers()
{
	return (nbOfFeathers);
}

void Bird::setFeathers(int _feathers)
{
	this->nbOfFeathers = _feathers;
}

// =====================================

Reptila::Reptila()
{}

Reptila::Reptila(string _species, int _age)
{
	this->setSpecies(_species);
	this->setAge(_age);
}

Reptila::Reptila(Reptila& other)
{
	this->setSpecies(other.getSpecies());
	this->setAge(other.getAge());
}

Reptila::~Reptila()
{}

// =====================================

Platipus::Platipus()
{}

Platipus::Platipus(string _species, int _age)
{
	this->Bird::setSpecies(_species);
	this->Bird::setAge(_age);
}

Platipus::Platipus(Platipus& other)
{
	this->Bird::setSpecies(other.Bird::getSpecies());
	this->Bird::setAge(other.Bird::getAge());
}

Platipus::~Platipus()
{}

void Platipus::amfibiu()
{
	cout <<"amfibious"<<'\n';
}

// =====================================
