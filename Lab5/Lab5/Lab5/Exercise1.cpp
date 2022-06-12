#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

	ofstream outputFile;
	string name;

	outputFile.open("Friends");

	cout << "Enter the name of three friends.\n";

	for (int i = 0; i < 3; i++) {
		cout << "Friend #" << i + 1 << ": ";
		cin >> name;
		outputFile << name << endl;
	}

	outputFile.close();

	return 0;
}