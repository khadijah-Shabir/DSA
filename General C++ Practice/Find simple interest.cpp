//


#include <iostream>
using namespace std;
int main()
{
	int amount,rate,years;
	cout<< "Enter principle amount";
	cin>>amount;
	cout<<"Enter rate of interest";
	cin>>rate;
	cout<<"Enter years";
	cin>>years;
	
	float interest;
	interest=(amount*rate*years)/100;
	
	cout<< "Interest amount for" << years<< "years is = "<< interest<<endl;
	
	
}

