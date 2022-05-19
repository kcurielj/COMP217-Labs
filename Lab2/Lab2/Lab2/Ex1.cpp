#include <iostream>
#include <iomanip>
using namespace std;

int maximum(int x, int y, int z);

int main() {
	cout << "Enter three integer values: ";
	int int1, int2, int3;
	cin >> int1 >> int2 >> int3;

	//invoke maximum
	cout << "The Maximum integer value is: " << maximum(int1, int2, int3) << endl;
}

int maximum(int x, int y, int z) {
	int maximumValue{ x };

	if (y > maximumValue) {
		maximumValue = y;
	}

	if (z > maximumValue) {
		maximumValue = z;
	}

	return maximumValue;

}