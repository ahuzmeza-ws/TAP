/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   employee.h       										╦ ╦╔╦╗╔═╗╔═╗╔╦╗   */
/*                            								║ ║║║║╠╣ ╚═╗ ║    */
/*   By: alinhuzmezan            							╚═╝╩ ╩╚  ╚═╝ ╩    */
/*                                                       George Emil Palade   */
/*   Created: 2020/12/28 19:51 by alinhuzmezan                                */
/*   Updated: 2020/12/28 20:02 by alinhuzmezan                                */
/*                                                                            */
/* ************************************************************************** */

//
//  employee.h
//  workspace_C++
//
#pragma once

#ifndef employee_h
#define employee_h

#include <iostream>
using namespace std;

class Employee {

	private:
		
		double 	hourlyRate;
		int		nbOfHours;
	
	public:
		// constructors
		Employee();
		Employee(const Employee &);
		// destructor
		~Employee();
		
		// get / set		
		virtual int 	getSalary(); // ret. hourlyRate * nbOfHourra
		virtual void 	setNbOfHours(int);
		virtual double  get_HourlyRate(); // ret .hourlyRate
		virtual void 	setHourlyRate(double);
		// op
		Employee &operator=(const Employee &);
		// iostream
		friend ostream& operator<<(ostream&, const Employee&);
		friend istream& operator>>(istream&, Employee&);

		
}; // eOf class Employee

class Manager : public Employee {


}; // eOf class Manager

#endif /* employee_h */

