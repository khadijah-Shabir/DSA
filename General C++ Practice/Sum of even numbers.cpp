#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	int sum=0;
	int i=2;
	
	while(i<=n){
		sum=sum+i;
		i=i+2;
	}
	
	cout<<"the value of sum of even numbers is " <<sum;
	
}
//progarm to find sum of all even number
