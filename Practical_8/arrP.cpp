#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
	string Storage;
	fstream Values_txt;
	Values_txt.open("values.txt");
	const int L=8;
	int *My_Array=new int[L];
	
	while(!Values_txt.eof()){
		int Array_len=0;
		(getline(Values_txt,Storage, ';'));
		istringstream Arr_len (Storage);
		Arr_len >>Array_len;
		const int k=Array_len;
		My_Array=new int[k];
		
		for(int count=0;count<Array_len;count++ )
		{
			if(count<(Array_len-1)){
				(getline(Values_txt,Storage,','));
				stringstream kk (Storage);
				kk>>My_Array[count];
			}
			else if(count==(Array_len-1)){
				(getline(Values_txt,Storage));
				stringstream ss (Storage);
				ss>>My_Array[count];
			}
		}
		
	int largest;
	largest=-10000;
	//Finding The Largest Element
	for(int t=0;t<Array_len;t++){
		if(largest<My_Array[t]){
			largest=My_Array[t];
		}
	}
	//Perfoming The Main Purpose Of This Act1 of Practical 8
	for(int bb=0;bb<Array_len;bb++){
		if(largest%2==0){
			My_Array[bb]=My_Array[bb]*largest;
		}
		else 
		{
			My_Array[bb]=My_Array[bb]*My_Array[bb];
		}
	}
	for(int f=0;f<Array_len;f++)
	{ 
		if(f<(Array_len-1)){
			cout<<My_Array[f]<<",";
		}
		else{
			cout<<My_Array[f]<<endl;
		}
	}
		//cout<<My_Fun(My_Array,Array_len);
		delete[] My_Array;
	}
	Values_txt.close();
	return 0;
}
