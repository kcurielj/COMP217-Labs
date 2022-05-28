#include <Iostream>
using namespace std;

void cubeByReference(int*);


int main() {

	int number = 5;
	int* numberPtr = &number;

	cout << "Value of number is " << number;
	cubeByReference(numberPtr);
	cout << "\The new value is " << number << endl;

	return 0;
}

void cubeByReference(int* nPtr) {
	*nPtr = (*nPtr) * (*nPtr) * (*nPtr);
}