#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

string bubSort(double array[8]);


int main()
{
	double arr[8];
	string O;
	fstream G;
	G.open("input.txt");
	while(!G.eof()){
		int count=0;
		while(count<1)
		{
			(getline(G,O,','));
				stringstream dd(O);
				dd>>arr[0];
			(getline(G,O,','));
				stringstream fd (O);
				fd>>arr[1];
			(getline(G,O,','));
				stringstream fs (O);
				fs>>arr[2];
			(getline(G,O,','));
				stringstream cv (O);
				cv>>arr[3];
			(getline(G,O,','));
				stringstream cx (O);
				cx>>arr[4];
			(getline(G,O,','));
				stringstream as (O);
				as>>arr[5];
			(getline(G,O,','));
				stringstream ax (O);
				ax>>arr[6];
			(getline(G,O));
				stringstream tc (O);
				tc>>arr[7];
			cout<<bubSort(arr)<<endl;
			count++;
		}
	}
	G.close();
	return 0;
}
string bubSort(double array[8]){
	    string Output_string;
	    double Temporary_string;
	    for (int i = 1; i<8;i++)
	    {
		for (int in= 0; in < (8 - i); in++)
		    if (array[in] > array[in + 1])
		    {
			Temporary_string = array[in];
			array[in] = array[in + 1];
			array[in + 1] = Temporary_string;
		    }
	    }
	    stringstream ss;
	    ss << array[0];
	    string str = ss.str();
	    Output_string += str;
	    for (int it= 1; it < 8; it++){
		    
			stringstream ss;
			ss << array[it];

			str = ss.str();
			Output_string += "," + str;
	    }
	    return Output_string;
}

