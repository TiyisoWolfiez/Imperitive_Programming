#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

string linSearch(double arr[10], double search[8]);
int main()
{
	string Array_Yemp[20];
	string fromfile;
	fstream infile;

	infile.open("input.txt");
	int index=0;
	int tt=0;
	int ff=10;
	int vv=0;

	while(!infile.eof()){

		int Accumulator=0;

		while(Accumulator<10){

			if(Accumulator<9){

				(getline(infile,fromfile,','));
				stringstream ss (fromfile);
				ss>>Array_Yemp[index];
				index+=1;

			}
			else if(Accumulator==9){

				(getline(infile,fromfile));
				stringstream ss (fromfile);
				ss>>Array_Yemp[index];
				index+=1;

			}
			Accumulator++;
		}
	}
	double arr[10];
	double search[8];

	while(ff<18){

		stringstream first (Array_Yemp[ff]);
		first>>search[vv];
		vv+=1;
		ff++;

	}
	while(tt<10){

		stringstream temp (Array_Yemp[tt]);
		temp>>arr[tt];
		tt+=1;

	}
	cout<<linSearch(arr,search);

	infile.close();
	return 0;
}
string linSearch(double arr[10], double search[8])
{
	string resultss;

	for(int i=0;i<8;i++)
	{
		string position;
		string Result="NA";

		for(int r =0;r<10;r++){

			if(arr[r]==search[i]){

				stringstream konvert;
				konvert<<r;
				position=konvert.str();
				stringstream Success (position);
				Success>>(Result);
				break;

			}

		}
		resultss+=Result+'\n';

	}
	return resultss;
}
