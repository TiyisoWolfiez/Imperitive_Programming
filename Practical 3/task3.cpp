#include <iostream>
#include <iomanip>
#include <cmath> 
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	
	int myNum;
	int studentA;
	
	
	srand(14);
	
	
	studentA=(rand() % (99-10+1))+10;
	
	//first iteration
	cout << "Enter your student number: ";
	cin >> myNum;
	if(myNum %2==0){
		cout << studentA << " is ready to take on COS 132!";
	        cout<<'\n';
	}
	else{
		cout<<myNum<<" is really excited for COS 132!";
		cout<<'\n';
	}
	
	//second iteration.
	cout << "Enter your student number: ";
	cin >> myNum;
	if(myNum %2==0){
		cout << studentA << " is ready to take on COS 132!";
	        cout<<'\n';
	}
	else{
		cout<<myNum<<" is really excited for COS 132!";
		cout<<'\n';
	}
	
	return 0;
}