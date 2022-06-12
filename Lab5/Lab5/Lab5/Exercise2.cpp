#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	ifstream inputFile;
	string name;

	inputFile.open("Friends.txt");

	if (inputFile) {
		
		cout << "Here are the names stored in the Friends file.\n";
		/*
		while (inputFile >> name) {
			cout << name << endl;
		}*/
		getline(inputFile, name);

		while (!inputFile.fail()) {

			cout << name << endl;
			getline(inputFile, name);
		}
	}
	else {
		cout << "Cannot open the file";
	}


	inputFile.close();

	return 0;
}