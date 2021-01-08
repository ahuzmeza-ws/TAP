/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   pers.cpp         										╦ ╦╔╦╗╔═╗╔═╗╔╦╗   */
/*                            								║ ║║║║╠╣ ╚═╗ ║    */
/*   By: alinhuzmezan            							╚═╝╩ ╩╚  ╚═╝ ╩    */
/*                                                       George Emil Palade   */
/*   Created: 2020/12/29 00:48 by alinhuzmezan                                */
/*   Updated: 2020/12/29 01:04 by alinhuzmezan                                */
/*                                                                            */
/* ************************************************************************** */

//
//  pers.cpp
//  workspace_C++
//
//  Created by Alin Huzmezan on 28.12.2020.
//  Copyright © 2020 Alin Huzmezan. All rights reserved.
//

#include "pers.h"

#include <iostream>
using namespace std;

// =============================================================================
// Persoana
void Persoana:: detalii() {
	cout<<"------------------------\n";
	cout<<"CNP:  "<< this->CNP  <<'\n';
	cout<<"Nume: "<< this->nume <<'\n';
	cout<<"------------------------\n";
}

// =============================================================================
// Student

Student:: Student(){

}

Student:: Student(char *_CNP, char *_nume)
{
	this->CNP = _CNP;
	this->nume = _nume;
}

Student:: ~Student() {
	this->CNP = nullptr;
	this->nota = 0;
}

int Student:: getNota() {
	return (nota);
}

void Student:: detalii() {
	cout<<"------------------------\n";
	//cout<<"CNP:  "<< this->CNP  <<'\n';
	//cout<<"Nume: "<< this->nume <<'\n';
	cout<<"email:  "<< this->email  <<'\n';
	cout<<"nota:   "<< this->nota <<'\n';
	cout<<"------------------------\n";
}

// =============================================================================
// Profesor
Profesor:: Profesor(){

}

Profesor:: Profesor(char *_email, char *_materie)
{
	this->email = _email;
	this->materie = _materie;
}

Profesor:: ~Profesor() {
	this->email = nullptr;
	this->materie = nullptr;
}

char* Profesor:: getMaterie() {
	return (this->materie);
}

void Profesor:: detalii() {
	cout<<"------------------------\n";
	//cout<<"CNP:  "<< this->CNP  <<'\n';
	//cout<<"Nume: "<< this->nume <<'\n';
	cout<<"email:   "<< this->email  <<'\n';
	cout<<"materie: "<< this->materie <<'\n';
	cout<<"------------------------\n";
}

// =============================================================================
// Angajat
Angajat:: Angajat(){

}

Angajat:: Angajat(char *_email, char *_departament)
{
	this->email = _email;
	this->departament = _departament;
}

Angajat:: ~Angajat() {
	this->email = nullptr;
	this->departament = nullptr;
}

char* Angajat:: getDepartament() {
	return (this->departament);
}

void Angajat:: detalii() {
	cout<<"------------------------\n";
	//cout<<"CNP:  "<< this->CNP  <<'\n';
	//cout<<"Nume: "<< this->nume <<'\n';
	cout<<"email: "<< this->email  <<'\n';
	cout<<"dep:   "<< this->departament <<'\n';
	cout<<"------------------------\n";
}

