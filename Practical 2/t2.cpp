#include <iostream>
using namespace std;
int main() {
	////declare your float variable here.
	float myPi ;
	
	///User Input
	cout<<"Enter a float number:";
	cin>>myPi;

	//declare your pointer here
float *piPointer=nullptr;
piPointer=&myPi;
    cout << *piPointer << endl;
	myPi=myPi+10.3;
	cout << *piPointer << endl;
    return 0;
}

