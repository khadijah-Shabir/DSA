//write a program that inputs time in seconds and convert it into hh-mm-ss format

#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter time in seconds";
	cin>>n;
	
	int h, min, sec;
	h=n/3600;
	n=n%3600;
	min=n/60;
	n=n%60;
	sec=n/60;
	
	cout<< "Time in hh-mm-ss format is " <<h<<":"<< min<<":"<<sec<<endl;
	
}
