/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   employee.cpp     										╦ ╦╔╦╗╔═╗╔═╗╔╦╗   */
/*                            								║ ║║║║╠╣ ╚═╗ ║    */
/*   By: alinhuzmezan            							╚═╝╩ ╩╚  ╚═╝ ╩    */
/*                                                       George Emil Palade   */
/*   Created: 2020/12/28 19:51 by alinhuzmezan                                */
/*   Updated: 2020/12/28 19:59 by alinhuzmezan                                */
/*                                                                            */
/* ************************************************************************** */

//
//  employee.cpp
//  workspace_C++
//

#include "employee.h"

Employee:: Employee() {

}

Employee:: Employee(const Employee &_other) {
	this->hourlyRate = _other.hourlyRate;
	this->nbOfHours = _other.nbOfHours;
}

Employee:: ~Employee() {
	this->hourlyRate = 0;
	this->nbOfHours = 0;
}

double	 Employee:: get_HourlyRate()
{
	return (hourlyRate);
}

void 	Employee:: setHourlyRate(double _new)
{
	hourlyRate = _new;
}

int 	Employee:: getSalary()
{
	return (hourlyRate * nbOfHours);
}

void 	Employee:: setNbOfHours(int _new)
{
	nbOfHours = _new;
}

Employee& 	Employee:: operator=(const Employee &_other)
{
	this->hourlyRate = _other.hourlyRate;
	this->nbOfHours = _other.nbOfHours;
	return (*this);
}

std::ostream& operator<<(std::ostream& out, const Employee& _emp)
{
    out <<"hR:" << _emp.hourlyRate  << '/' 
       <<"nH:" << _emp.nbOfHours << '/';
       
    return (out);
}

std::istream& operator>>(std::istream& in, Employee& _emp)
{
	cout<<"nH= ";
	in >> _emp.nbOfHours;
	cout<<"hR= ";
	in >> _emp.hourlyRate;
	
	return (in);
}


