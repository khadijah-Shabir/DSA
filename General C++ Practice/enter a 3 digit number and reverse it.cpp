// input a 3 digit number and print reversed number

#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter number";
	cin>>n;
	
	int a, b; //r stands for reverse
	
	a=n/100;
	n=n%100;
	b=n/10;
	n=n%10;
	
	cout<<"the reversed number is "<< n<<b<<a;
	
}
