//%age of obtained marks

#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
float totalMarks;
cout<<"Enter Total marks";
cin>> totalMarks;

float obtainedMarks;
cout<<"Enter obtained marks";
cin>>obtainedMarks;

float percentage;
percentage= (float)obtainedMarks/(float)totalMarks*100;

cout<<"Your perecentage is"<<setprecision(2)<<percentage<<"%"<<endl;

}

