#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
	
	double x;
	double tValue;
	
	cout << "Enter a value of x: ";
	cin>> x;
	
	tValue=((cos(pow(x, 2)))/(5+2*cos(x)))+((sin(pow(x, 2)))/(5*M_PI))+(tan(x)/(cos(x)+sin(x)));
	
	cout << "The answer is: " << setprecision(6) << tValue<< endl;
	
	return 0;
}
