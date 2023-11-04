//Write a program that inputs two numbers, swaps their values and print their output on screen

#include <iostream>
using namespace std;
int main()

{
	int a, b, temp;
	cout<<"Enter the value of a and b";
	cin>>a>>b;
	
	temp=a;
	a=b;
	b=temp;
	
	cout<< "Value of a is "<<a <<"Vlaue of b is "<<b;
	
}
