//get minimun number with the help of Arrays

#include<iostream>
using namespace std;

int getMin(int num[], int size )
{

int mini = INT_MAX;
for(int i=0; i<size; i++){
	mini=min(mini, num[i]);
/*
if (num[i]< INT_MAX){
	cout<< num[i];
}
*/
}
//returning minimum value
return mini;
}

int getMax(int num[], int size )
{

int maxi = INT_MIN;
for(int i=0; i<size; i++){
	maxi=max(maxi, num[i]);
/*
if (num[i]< INT_MIN){
	cout<< num[i];
}
*/
}
//returning minimum value
return maxi;
}


int main()
{
	
int size;
cin>>size;
int num[100];
for(int i=0; i<size; i++){
	cin>> num[i];	
}
 cout<<"Minimum value is"<< getMin(num, size)<<endl;
 cout<<"Maximum value is"<< getMax(num, size)<<endl;
}
