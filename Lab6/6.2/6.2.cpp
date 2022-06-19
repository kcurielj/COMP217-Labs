#include <iostream>
#include <exception>
using namespace std;

void throwException() {
	try {
		cout << " Function throwException throws an exception\n";
		throw exception{};
	}
	catch (const exception&) {
		cout << " Exception handled in function throwException"
			<< "\n Function throwException rethrows exception";
		throw; 
	}

	cout << "This should not print\n";
}

int main() {
	try {
		cout << "\nmain invokes function throwException\n";
		throwException();
		cout << "This should not print\n";
	}
	catch (const exception&) {
		cout << "\n\nException handled in main\n";
	}

	cout << "Program control continues after catch in main\n";
}