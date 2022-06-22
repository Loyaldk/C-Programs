//Chase Salas
//OCCC Spring 2022
//Beginning Programming

#include<iostream>
#include<cctype>
#include<string>
#include<fstream>
using namespace std;

void checkPassword(string);

const int MIN_PASS = 12;

int main() {

	string fileName;
	cout << "Please enter the file name: ";
	getline(cin, fileName);
	ifstream fin;
	

	if (!fin) {
		cout << "Error opening file " << fileName << "!!!\n";
	}

	checkPassword(fileName);

	cout << "End of the Password Verifier program!\n";
	return 0;
}

void checkPassword(string Name) {
	ifstream fin;
	fin.open(Name);
	
	int correct = 0, incorrect = 0;

	while (getline(fin, Name)) {
		int j = Name.length();

		if (j < MIN_PASS) {
			incorrect++;
			continue;
		}
		int i = 0;
		bool upper = false, lower = false, space = false, num = false, special = false;

		for (; i < j; i++) {
			if (isupper(Name[i])) {
				upper = true;
			}
			if (islower(Name[i])) {
				lower = true;
			}
			if (isspace(Name[i])) {
				space = true;
			}
			if (isdigit(Name[i])) {
				num = true;
			}
			if (!isalnum(Name[i])) {
				special = true;
			}

			}
		if ((upper == true) && (lower == true) && (space == false) && (num == true) && (special == true)) {
			correct++;
		}
		else {
			incorrect++;
		}
	}
	cout << endl << "Total correct passwords is " << correct << "!!\n";
	cout << "Total incorrect passwords is " << incorrect << "!!\n";
}