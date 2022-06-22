
#include<iostream>
#include<cctype>
#include<string>
using namespace std;

void checkPassword(string);

int MIN_PASS = 12;

int main() {

	string password;
	cout << "New password must not include spaces and include one upper, one lower case letter, and one number\n";
	cout << "Please enter the password: ";
	getline(cin, password);

	checkPassword(password);

	cout << "End of the Password Verifier program!\n";
	return 0;
}

void checkPassword(string pass) {
	bool upper = false, lower = false, space = false, num = false;
	int i = 0, j = pass.length();

		if (j < MIN_PASS) {
			cout << "Minimum password length is not meet!\n";
			return;
		}

	for (;i <= j; i++) {
		if (isupper(pass[i])){
			upper = true;
		}
		if(islower(pass[i])) {
			lower = true;
		}
		if (isspace(pass[i])) {
			space = true;
		}
		if (isdigit(pass[i])) {
			num = true;
		}
	}
	if ((upper == true) && (lower == true) && (space == false) && (num == true)) {
		cout << "New password " << pass << " is correct format!\n";
	}
	else {
		cout << "New password " << pass << " is incorrect format! Please try again!\n";
		exit;
	}
}
