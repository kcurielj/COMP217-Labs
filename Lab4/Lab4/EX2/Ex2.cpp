#include <iostream>
#include <array>
using namespace std;

int main() {
	const size_t arraySize{ 4 };
	array<int, arraySize> a{10, 20, 30 ,40};
	int totalSum{ 0 };

	for (size_t i{ 0 }; i < a.size(); i++) {
		totalSum += a[i];
	}

	cout << "Total Sum of array elements: " << totalSum << endl;


}