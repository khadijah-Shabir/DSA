//find compound interest

#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	double p, r, t;
	cout<<"Enter principal amount";
	cin>>p;
	cout<<"Enter rate of interest";
	cin>>r;
	cout<<"Enter time";
	cin>>t;
	
	double CI;
	CI= p*(pow(1+r,t)-1);
	
	cout<<CI;
	
	
}
