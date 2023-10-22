#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <sstream>
using namespace std;

int main()
{
	int Limit;
	int iterator=0;
	int counter_f=0;
	cout<<"Enter an int: ";
	cin>>Limit;
	
	while(iterator<=Limit){
		if(iterator%2!=0){
			counter_f+=1;
		}
		iterator+=1;
		
	}
	cout<<"Number of Odds: "<<counter_f<<endl;
	   
	return 0;
	
}
