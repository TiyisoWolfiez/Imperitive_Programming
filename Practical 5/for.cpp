//TASK 1
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int number;
	char symbol;
	
	
	
	for(int i=0;i<2;i++){
	    cout<<"Enter a pair: ";
	    cin>>symbol;
	    cin.ignore(1);
	    cin>>number;
    	int num_count=number+1;
	    int my_num =number;
    	if( symbol == '-'){
	    	for( int iterator = number; iterator >0; iterator--){
		    	my_num -= number;
	       	}
		    cout<<"Result: "<< my_num <<endl;
    	}
    	else if( symbol == '+'){
	    	for( int iterator = number; iterator >0; iterator--){
	    		my_num += number;
		    }
    		cout<<"Result: "<< my_num <<endl;
	    }
 	    else if( symbol == '*'){
		    for(int iterator = number; iterator >0; iterator--){
			    my_num =pow(number,num_count);
		    }
		    cout<<"Result: "<< my_num <<endl;
	    }
	    else{
		    cout<<"Result: "<< "0"<<endl;
	    }
	}
	return 0;
}

