#include <iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter the value of nyumber on which you want to perform compound assignment operations";
	cin>>a;
	cout <<"Value of a is"<<a<<endl;
	a+=5;
	cout<< "Value of a+=5 is"<<a <<endl;
	a-=5;
	cout<< "Value of a-=5 is"<<a <<endl;
	a*=5;
	cout<< "Value of a*=5 is"<<a <<endl;
	a/=5;
	cout<< "Value of a/=5 is"<<a <<endl;
	a%=5;
	cout<< "Value of a%=5 is"<<a <<endl;
	
}
