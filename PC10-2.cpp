//Chase Salas
//OCCC Spring 2022
//Beginning Programming

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

string reverseString(const string);

int main() {

	cout << "Welcome to the backward swap program!\n";

	
	string word;
	cout << "Please enter the string: ";
	getline(cin, word);

	
	string rev = reverseString(word);

	cout << "Output reversed is " << rev << endl;


	return 0;
}

string reverseString(const string word) {
	string temp = word;
	int i = 0, j = word.length() - 1;

	for (; j >= 0; i++, j--) { 
		temp[i] = word[j];
	}
	return temp;
}