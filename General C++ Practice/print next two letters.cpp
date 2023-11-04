// user input a letter and next two letters are printed on screen

#include <iostream>
using namespace std;
int main()

{
	char ch1;
	cout<<"Enter any letter";
	cin>>ch1;
	
	char ch2, ch3;
	ch2=ch1+1;
	ch3=ch2+1;
	
	cout<< "2nd letter is "<<ch2<<" Third letter is "<<ch3;
	
	
}
