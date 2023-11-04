#include <iostream>
using namespace std;
int main()
{
	int n ;
	cout<<"Enter the value of n(the no of which you want to get the factorial)";
	cin>>n;
	int fact=1;
	int c=1;
	
	while(c<=n){
		fact=fact*c;
		c=c+1;
	
	}
	cout<<fact;	
}
