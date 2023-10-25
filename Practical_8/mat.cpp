#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

	string junior;

	int **My_Array;
	
int main(){
	
	fstream File;
	File.open("values.txt");
	
	int counter_rows=0;
	(getline(File,junior, ','));
	istringstream Row_len (junior);
	
	Row_len >>counter_rows;
	
	int counter_cols=0;
	(getline(File,junior));
	istringstream Col_len (junior);
	
	Col_len >>counter_cols;
	
	const int rr=counter_rows;
	const int smile=counter_cols;

	My_Array=new int*[counter_rows];
	
	int Pointerr=0;while(Pointerr<counter_rows)
	{
		
		*(My_Array+Pointerr)= new int [counter_cols];Pointerr++;
		
	}
	
	My_Array[rr][smile];
	
	string Accomodation;
	
	
	while(!File.eof())
	{
		for(int Tiyisoww=0;Tiyisoww<counter_rows;Tiyisoww++)
		{
			for(int Tiyisoww_two=0;Tiyisoww_two<counter_cols;Tiyisoww_two++)
			{
				if(Tiyisoww_two<(counter_cols-1))
				{
							
					(getline(File,Accomodation, ','));
					istringstream First_Values (Accomodation);
					First_Values >>My_Array[Tiyisoww][Tiyisoww_two];
					
					
				}
				else
				{
					
					(getline(File,Accomodation));
					istringstream Last_value (Accomodation);
					Last_value>>My_Array[Tiyisoww][Tiyisoww_two];
					
				}
			}
		}
	}
	int odds=0;int evens=0;
	
	for(int smile=0;smile<counter_rows;smile++)
	{
		for(int ll=0;ll<counter_cols;ll++)
		{
			int *pter=&My_Array[smile][ll];
			if(*pter%2==0)
			{
				evens+=1;
			}
			else
			{
				odds+=1;
			}
		}
	}
	int Largest=-1000;
	for(int hh=0;hh<counter_rows;hh++)
	{
		for(int gg=0;gg<counter_cols;gg++)
		{
			if(My_Array[hh][gg]>Largest)
			{
				
				Largest=My_Array[hh][gg];
				
			}
		}
	}
	int Lowest_Value=1000;
	for(int kk=0;kk<counter_rows;kk++)
	{
		for(int vv=0;vv<counter_cols;vv++)
		{
			if(My_Array[kk][vv]<Lowest_Value)
			{
				
				Lowest_Value=My_Array[kk][vv];
				
			}
		}
	}
	cout<<"Count Odd: "<<odds<<endl;
	cout<<"Count Even: "<<evens<<endl;
	cout<<"Largest Number: "<<Largest<<endl;
	cout<<"Smallest Number: "<<Lowest_Value<<endl;

	return 0;
}
