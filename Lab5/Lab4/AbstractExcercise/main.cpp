#include <iostream>
#include <iomanip> 
#include <vector> 
#include "Employee.h"
#include "SalariedEmployee.h"
#include "BasePlusCommissionEmployee.h"
#include "CommissionEmployee.h"
using namespace std;

void virtualViaPointer(const Employee* const);
void virtualViaReference(const Employee&);

int main() {
	/*
	BasePlusCommissionEmployee emp1("Kevin", "Curiel", "123-123-123", 100, 0.15, 10000);
	CommissionEmployee emp2("Jorge", "Curiel", "143-143-143", 100, 0.15);

	cout << fixed << setprecision(2);
	cout << "\nFirst Name: " << emp1.getFirstName()
		<< "\nLast Name: " << emp1.getLastName()
		<< "\nSocial Security Number: $" << emp1.getSocialSecurityNumber()
		<< "\nGross Sales: " << emp1.getGrossSales()
		<< "\nCommission Rate: " << emp1.getCommissionRate();

	emp1.setGrossSales(20000);
	emp1.setCommissionRate(0.20);

	cout << emp1.toString();
	cout << emp2.toString();

	cout << "\nEarnings: $" << emp1.earnings() << endl;

	/*
	//Natural: Aim base-class pointers at base-class object
	CommissionEmployee* commissionEmployeePtr{ &emp2 };
	cout << "\n\nCALLING TOSTRING WITH BASE-CLASS POINTER TO "
		<< "\n\nBASE-CLASS OBJECT INVOKES BASE-CLASS TOSTERING FUNCTION:\n"
		<< commissionEmployeePtr->toString(); //Base Version

	//Natural: Aim derived-class pointers at derived-class object
	BasePlusCommissionEmployee* basePlusCommissionEmployeePtr{ &emp1 };
	cout << "\n\nCALLING TOSTRING WITH DERIVED-CLASS POINTER TO "
		<< "\n\DERIVED-CLASS OBJECT INVOKES DERIVED-CLASS TOSTERING FUNCTION:\n"
		<< basePlusCommissionEmployeePtr->toString(); //Base Version
	

	const CommissionEmployee* commissionEmployeePtr{ &emp2 };
	cout << "Calling virtual function toString() with a base-class pointer"
		<< "\nto base-class object invokes base-class\n"
		<< commissionEmployeePtr->toString();

	const BasePlusCommissionEmployee* basePlusCommissionEmployeePtr{ &emp1 };
	cout << "Calling virtual function toString() with a derived-class pointer"
		<< "\nto derived-class object invokes derived-class\n"
		<< basePlusCommissionEmployeePtr->toString();

	commissionEmployeePtr = &emp1;
	cout << "Calling virtual function toString() with a base-class pointer"
		<< "\nto derived-class object invokes derived-class\n"
		<< commissionEmployeePtr->toString();

	return 0;
	*/

	cout << fixed << setprecision(2);

	SalariedEmployee salariedEmployee{
		"John", "Smith", "111-11-1111", 800
	};
	CommissionEmployee commissionEmployee{
		"Sue", "Jones", "333-33-3333", 10000, .06
	};
	BasePlusCommissionEmployee basePlusCommissionEmployee{
		"Bob", "Lewis", "444-44-4444", 5000, .04, 300
	};

	cout << "EMPLOYEES PROCESSED INDIVIDUALLY USING STATIC BINDING\n"
		<< salariedEmployee.toString()
		<< "\nearned $" << salariedEmployee.earnings() << "\n\n"
		<< commissionEmployee.toString()
		<< "\nearned $" << commissionEmployee.earnings() << "\n\n"
		<< basePlusCommissionEmployee.toString()
		<< "\nearned $" << basePlusCommissionEmployee.earnings() << "\n\n";

	vector<Employee *> employees{ &salariedEmployee, &commissionEmployee, &basePlusCommissionEmployee };

	cout << "EMPLOYEES PROCESSED PLOYMORPHICALLY VIA DYNAMIC BINDING\n\n";

	cout << "VIRTUAL FUNCTION CALLS MADE OFF BASE-CLASS POINTERS\n";

	for (const Employee* employeePtr : employees) {
		virtualViaPointer(employeePtr);
	}

	cout << "VIRTUAL FUNCTION CALLS MADE OFF BASE-CLASS REFERENCES\n";

	for (const Employee* employeePtr : employees) {
		virtualViaReference(*employeePtr);
	}
}

void virtualViaPointer(const Employee* const baseClassPtr) {
	cout << baseClassPtr->toString()
		<< "\nearned $" << baseClassPtr->earnings() << "\n\n";

}

void virtualViaReference(const Employee& baseClassRef) {
	cout << baseClassRef.toString()
		<< "\nearned $" << baseClassRef.earnings() << "\n\n";

}
