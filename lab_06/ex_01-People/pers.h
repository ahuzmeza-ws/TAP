/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   pers.h           										╦ ╦╔╦╗╔═╗╔═╗╔╦╗   */
/*                            								║ ║║║║╠╣ ╚═╗ ║    */
/*   By: alinhuzmezan            							╚═╝╩ ╩╚  ╚═╝ ╩    */
/*                                                       George Emil Palade   */
/*   Created: 2020/12/29 00:48 by alinhuzmezan                                */
/*   Updated: 2020/12/29 01:04 by alinhuzmezan                                */
/*                                                                            */
/* ************************************************************************** */

//
//  pers.h
//  workspace_C++
//
//  Created by Alin Huzmezan on 28.12.2020.
//  Copyright © 2020 Alin Huzmezan. All rights reserved.
//

#ifndef pers_h
#define pers_h

class Persoana {

	public:
		char* 	CNP;
		char*	nume;
		
		virtual void detalii() = 0;

}; // eOf Persoana class

class Student : public Persoana {

	public:
		char*	email;
		double 	nota;
		
		Student();
		Student(char*, char*);
		~Student();
		
		int 	getNota();
		void 	detalii();

}; // eOf Student class

class Profesor {
	public:
		char*	email;
		char* 	materie;
		
		Profesor();
		Profesor(char*, char*);
		~Profesor();
		
		char* 	getMaterie();
		void 	detalii();
		
}; // eOf Profesor class

class Angajat {
	public:
			char*	email;
			char* 	departament;
			
			Angajat();
			Angajat(char*, char*);
			~Angajat();
			
			char* 	getDepartament();
			void 	detalii();
}; // eOf Angajat class

#endif /* pers_h */

