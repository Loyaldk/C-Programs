//Chase Salas
//OCCC Spring 2022
//Beginning Programming

#include<iostream>
#include<cctype>
#include<string>
using namespace std;


int countSpaces(string);
string toUppercase(string);
string reverseString(const string);

int main() {

	cout << "Welcome to the string demo!\n" << endl;

	cout << "Please enter your name: ";
	string theName;
	getline(cin, theName);

	cout << "Your name is " << theName << endl;

	cout << "Number of characters: " << theName.length() << endl;
	cout << "Number of spaces: " << countSpaces(theName) << endl;
	string theUppercaseName = toUppercase(theName);
	cout << "In uppercase it's " << theUppercaseName << endl;



	cout << endl << "Thank you for playing String Demo!\n";


	return 0;
}


int countSpaces(string spaces) {
	int count = 0;
	int last = spaces.length();
	for (int i = 0; i < last; i++) {
		if (isspace(spaces[i])) {
			count++;
		}
	}
	
	
	/* SLOWER CODE COST MUCH MORE PERFORMANCE
	for (int i = 0; i < spaces.length(); i++) {
		if (isspace(spaces[i])) {
			count++;
		}
	}*/

	return count;
}

string toUppercase(string a) {
	string result = "";
	int stop = a.length();

	for (int i = 0; i < stop; i++) {
			result += toupper(a[i]);
		
	}
	return result;
}

string reverseString(const string) {


}