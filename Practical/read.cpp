#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <sstream>
#include <iomanip>

using namespace std;

int main()
{
	int x=0,y,z,w;
	string number;

	fstream linesFile("lines.txt");
	//Opening the second textfile
	fstream linestwoFile("lines2.txt");
	
	while(!linesFile.eof())
	{
		if( linesFile >> number)
		{
			w=number.find("stop");
			if( w != string::npos ){
				cout<<"File reading stopped"<<endl;
				break;
			}
			for(int t=1;t<2;t++)
			{
				istringstream ss (number);
				ss>>z;
				y=z+x;
				cout<<y<<endl;
				x=z;
			}
		}
	}
	cout<<endl;
	x=0;
	while(!linestwoFile.eof())
	{
		if(linestwoFile >> number)
		{
			w=number.find("stop");
			if( w != string::npos ){
				cout<<"File reading stopped"<<endl;
				break;
			}
			for(int t=1;t<2;t++)
			{
				istringstream ss (number);
				ss>>z;
				y=z+x;
				cout<<y<<endl;
				x=z;
			}
		}
	}
	linesFile.close();
	linestwoFile.close();
	return 0;
}
