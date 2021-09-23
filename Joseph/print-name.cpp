#include <iostream>

using namespace std;

string getName(){
	string fname, lname;
	cout << "Enter your first name: ";
	cin >> fname;
	cout << "Enter your last name: ";
	cin >> lname;
	cout << endl;

	return fname + " " + lname;
}


int main(){
	cout << getName();
	cout << endl;
}
