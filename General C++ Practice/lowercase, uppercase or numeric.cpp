#include<iostream>
using namespace std;
int main()
{
    char n;
	cin>>n;
	if ((n >= 'A') && (n<= 'Z')){
		cout<<"This is upper case";
	}
   else if( (n>='a') && (n<='z') ){
		cout<<"This is lowercase";
	}
	else if ((n>='0') && (n<='9')){
		cout<<"This is numeric";
	}
	else{
		cout<<"Invalid input";
	}
}
