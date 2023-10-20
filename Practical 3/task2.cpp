#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

using namespace std;

int main() {
	
	string name;
	
	cout << "Enter your name: ";
	getline(cin, name);
	cout << setfill('*');
	cout<<"Howdy: "<< setw(7) <<name;
	cout<< '\n';

	cout << "Enter your name: ";
	getline(cin, name);
	cout << setfill('*');
	cout<<"Howdy: "<< setw(7) <<name;
	cout<< '\n';
	
	cout << "Enter your name: ";
	getline(cin, name);
	cout << setfill('*');
	cout<<"Howdy: "<< setw(7) <<name;
	cout<< '\n';
	
	return 0;
}
