#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int main() {

	Account account1{ "Jane Green" };
	Account account2{ "Kevin Curiel" };

	cout << "Account 1 name is: " << account1.getName() << endl;
	cout << "Account 2 name is: " << account2.getName() << endl;

}