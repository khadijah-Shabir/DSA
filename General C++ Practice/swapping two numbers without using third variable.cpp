// Write a program that inputs two numbers and after swapping displays them without using any third variable

#include <iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"Enter the value of x and y";
	cin>>x>>y;
	
	x=x+y;
	y=x-y;
	x=x-y;
	
	cout<<"The value of x is "<<x<<"The value of y is "<<y;
}

