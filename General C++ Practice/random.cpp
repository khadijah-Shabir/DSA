

#include <iostream>
#include<iomanip>>
using namespace std;
int main()
//add iomanip headerfile at start
//setw divides the pace into columns and place each letter in each column. 
//If we have allocated more coloumns than  required than it right-justify the space.
{
	cout<<"*\n**\n***\n****\n*****"<<endl<<endl;
	cout<<"1\t 2\t 3\t 4\t 5\n6\t 7\t 8\t 9\t 10\t "<<endl <<endl;
	
	
	cout<< setw(10) <<"Number";
    cout<< setw(10) <<"Square";
    cout<< setw(10) <<"Cube"<<endl;
    
    cout<< setw(10) << 1<< setw(10)<< 1*1 << setw(10) <<1*1*1<<endl;
    cout<< setw(10) << 2<< setw(10) <<2*2<< setw(10) <<2*2*2<<endl;  
    cout<< setw(10) << 3<< setw(10)<< 3*3 << setw(10)<<3*3*3<<endl;  
    cout<< setw(10) << 4<< setw(10)<< 4*4 << setw(10)<<4*4*4<<endl; 
    cout<< setw(10) << 5<< setw(10) <<5*5<< setw(10) <<5*5*5<<endl;
    
//set precision manipulator adjusts the digits after decimal points.
// It rounds it off and also set the number of digits after decimal points as specified by us.
 
 float r, n1, n2;
 n1=234.897;
 n2=456.786;
 r=n2/n1;
 
 cout<<setprecision(5)<<r<<endl;
 cout<<setprecision(4)<<r<<endl;
 cout<<setprecision(3)<<r<<endl;
 cout<<setprecision(2)<<r<<endl;
 cout<<setprecision(1)<<r<<endl;
 
 
 cout<<endl;
 
 char st[]="OOP using C++";
 cout<<setw(20)<<setfill('*')<<st<<endl;


}






