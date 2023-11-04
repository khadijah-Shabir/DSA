// Write a program that explains the difference of postfix increment operator and prefix increment operator used as independent expression
#include <iostream>
using namespace std;
int main()
{
/*	int a=1,b=1,x=1,y=1;
	a++;
	cout<<"Value of a++ is "<<a<<endl;
	++a;
	cout<<"Value of ++a is "<<a<<endl;
	++x;
	cout<<"Value of ++x is "<<x<<endl;
	y=x;
	++y;
	cout<<"Value of ++y is "<<y<<endl;*/
	
	int a,b,x,y;
	a=b=x=y=0;
	a--;
	b=a;
	x--;
	y=x;
		
	cout<< a <<endl;
	cout<< b<<endl;
	cout<< x <<endl;
	cout<< y <<endl;
}
