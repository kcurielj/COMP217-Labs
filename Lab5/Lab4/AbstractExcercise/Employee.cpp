#include <sstream>
#include "Employee.h"
using namespace std;

Employee::Employee(const string& first, const string& last, const string& ssn)
	: firstName(first), lastName(last), socialSecurityNumber(ssn) {}

void Employee::setFirstName(const string& first) {
	firstName = first;
}

string Employee::getFirstName() const
{
	return firstName;
}

void Employee::setLastName(const std::string& last)
{
	lastName = last;
}

string Employee::getLastName() const
{
	return lastName;
}

void Employee::setSocialSecurityNumber(const std::string& ssn)
{
	socialSecurityNumber = ssn;
}

string Employee::getSocialSecurityNumber() const
{
	return socialSecurityNumber;
}

double Employee::earnings() const
{
	return 0.0;
}

std::string Employee::toString() const
{
	return getFirstName() + " "s + getLastName() + "\nsocial security number: "s + getSocialSecurityNumber();
}
