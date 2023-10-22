#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string compare_var;
    int compare_value;
    
    
	
	cout<<"Input a colour: ";
            cin>>compare_var;
            
            if(compare_var =="green"|| compare_var=="yellow" || compare_var=="orange" || compare_var=="blue" || compare_var=="purple" || compare_var=="red"){
            cout<<"Input a number: ";
            cin>>compare_value;
                if(compare_var == "red" || compare_var == "blue" || compare_var == "yellow"){
                    if(compare_value==1){
                    cout<<"yellow,orange,red,purple,blue,green"<<endl;
                    }
                    else if(compare_value==2){
                        cout<<compare_var<<endl;
                    }
            else{
                    if(compare_var=="yellow"){
                        cout<<"red"<<endl;
                    }
                    else if(compare_var=="red"){
                        cout<<"blue"<<endl;
                    }
                    else if(compare_var=="blue"){
                        cout<<"yellow"<<endl;
                    }
            }
        }
            else{
                if(compare_value==1){
                    cout<<"green,orange,purple"<<endl;
                }
                else if(compare_value==2){
                    cout<<compare_var<<"!"<<endl;
                }
                else{
                    if(compare_var=="green"){
                        cout<<"orange"<<endl;
                    }
                    else if(compare_var=="orange"){
                        cout<<"purple"<<endl;
                    }
                    else if(compare_var=="purple"){
                        cout<<"green"<<endl;
                    }
                }          
            }

        }
        else if(compare_var !="green"|| compare_var!="yellow" || compare_var!="orange" || compare_var!="blue" || compare_var!="purple" || compare_var!="red"){
            cout<<"Colour not found"<<endl;
        }
	for(int k=0;k<2;k++){
		cout<<"Input a colour: ";
            cin>>compare_var;
            
            if(compare_var =="green"|| compare_var=="yellow" || compare_var=="orange" || compare_var=="blue" || compare_var=="purple" || compare_var=="red"){
            cout<<"Input a number: ";
            cin>>compare_value;
                if(compare_var == "red" || compare_var == "blue" || compare_var == "yellow"){
                    if(compare_value==1){
                    cout<<"yellow,orange,red,purple,blue,green"<<endl;
                    }
                    else if(compare_value==2){
                        cout<<compare_var<<endl;
                    }
            else{
                    if(compare_var=="yellow"){
                        cout<<"red"<<endl;
                    }
                    else if(compare_var=="red"){
                        cout<<"blue"<<endl;
                    }
                    else if(compare_var=="blue"){
                        cout<<"yellow"<<endl;
                    }
            }
        }
            else{
                if(compare_value==1){
                    cout<<"green,orange,purple"<<endl;
                }
                else if(compare_value==2){
                    cout<<compare_var<<"!"<<endl;
                }
                else{
                    if(compare_var=="green"){
                        cout<<"orange"<<endl;
                    }
                    else if(compare_var=="orange"){
                        cout<<"purple"<<endl;
                    }
                    else if(compare_var=="purple"){
                        cout<<"green"<<endl;
                    }
                }          
            }

        }
        else if(compare_var !="green"|| compare_var!="yellow" || compare_var!="orange" || compare_var!="blue" || compare_var!="purple" || compare_var!="red"){
            cout<<"Colour not found"<<endl;
        }
	
}
	
    return 0;
}
