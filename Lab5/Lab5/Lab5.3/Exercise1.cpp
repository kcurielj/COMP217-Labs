#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void showState(fstream&);

int main() {
	
	fstream testFile("stuff.dat", ios::out);
	
	if (testFile.fail()) {
		cout << "Cannot open the file.\n";
		return 1;
	}

	int num = 10;
	cout << "Writing to the file\n";
	testFile << num;

	showState(testFile);
	testFile.close();
	
	testFile.open("stuff.dat", ios::in);
	if (testFile.fail()) {
		cout << "Cannot open the file\n";
		return 1;
	}

	cout << endl << "Reading the file\n";
	testFile >> num;
	showState(testFile);

	testFile.close();

	return 0;
}

void showState(fstream& file) {
	cout << "File Status:\n";
	cout << "eof bit: " << file.eof() << endl;
	cout << "fail bit: " << file.fail() << endl;
	cout << "worst bit: " << file.bad() << endl;
	cout << "good bit: " << file.good() << endl;
	file.clear();
}