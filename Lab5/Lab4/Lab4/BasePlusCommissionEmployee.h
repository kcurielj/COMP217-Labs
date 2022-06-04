#pragma once
#include <string>
#include "CommissionEmployee.h"

class BasePlusCommissionEmployee : public CommissionEmployee
{
public:
	BasePlusCommissionEmployee(const string&, const string&, const string&, double = 0.0, double = 0.0, double = 0.0);

	void setBaseSalary(double);
	double getBaseSalary() const;

	virtual double earnings() const;
	virtual string toString() const;
private:
	double baseSalary;
};