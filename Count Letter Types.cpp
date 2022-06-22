//Chase Salas
//OCCC Spring 2022
//Beginning Programming

#include <iostream>
#include <cctype>
#include <string>
#include <fstream>
using namespace std;


int main() {
	int upperCheck = 0;

	string fileName;
	cout << "Please enter the file name: ";
	getline(cin, fileName);
	ifstream fin;
	fin.open(fileName);

	if (!fin) {
		cout << "Error opening file " << fileName << "!!!\n";
	}


	for (int a = 0; getline(fin, fileName); a++) {
		for (int i = 0, j = fileName.length(); i <= j; i++) {
			if (isupper(fileName[i])) {
				upperCheck++;
			}
		}

	}

	cout << "The amount of Upper Case letters is " << upperCheck << "!!\n";

}