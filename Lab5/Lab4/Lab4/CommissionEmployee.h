#pragma once
#include <string>
using std::string;


class CommissionEmployee
{
public:
	CommissionEmployee(const string&, const string&, const string&, double = 0.0, double = 0.0);

	void setFirstName(const string&);
	string getFirstName() const;

	void setLastName(const string&);
	string getLastName() const;

	void setSocialSecurityNumber(const string&);
	string getSocialSecurityNumber() const;

	void setGrossSales(double);
	double getGrossSales() const;

	void setCommissionRate(double);
	double getCommissionRate() const;

	//Other Functions
	virtual double earnings() const;
	virtual string toString() const;

private:
	string firstName;
	string lastName;
	string socialSecurityNumber;
	double grossSales;
	double commissionRate;
}; 
