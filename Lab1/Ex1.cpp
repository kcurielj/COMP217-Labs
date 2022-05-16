#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int main() {

	Account account1{ "Jane Green" , 50};
	Account account2{ "Kevin Curiel" , -7};

	cout << "Account 1 name is: " << account1.getName() << " balance is $" << account1.getBalance();
	cout << "Account 2 name is: " << account2.getName() << " balance is $" << account2.getBalance();

	cout << "\n\nEnter deposit amount for accoutn1: ";
	int depositAmount;

	cin >> depositAmount;

	cout << "Adding " << depositAmount << " to account1 balance";
	account1.deposit(depositAmount);

	cout << "Account 1 name is: " << account1.getName() << " balance is $" << account1.getBalance();
	cout << "Account 2 name is: " << account2.getName() << " balance is $" << account2.getBalance();

	cout << "\n\nEnter deposit amount for accoutn1: ";
	int depositAmount;

	cin >> depositAmount;

	cout << "Adding " << depositAmount << " to account1 balance";
	account1.deposit(depositAmount);

	cout << "Account 1 name is: " << account1.getName() << " balance is $" << account1.getBalance();
	cout << "Account 2 name is: " << account2.getName() << " balance is $" << account2.getBalance();
}