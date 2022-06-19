#include <iostream>
#include <exception>
using namespace std;

void function3() {
	cout << "In fucntion 3" << endl;
	throw runtime_error{ "runtime_error in function3" };
}

void function2() {
	cout << "function3 is called inside function2" << endl;
	function3();
}

void function1() {
	cout << "function2 is called inside function1" << endl;
	function2();
}

int main() {
	try {
		cout << "function1 is called inside main" << endl;
		function1();
	}
	catch (const runtime_error& error) {
		cout << "Exception occurred: " << error.what() << endl;
		cout << "Exception handled in main" << endl;
	}
}