//find area of triangle

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  double a,b,c,s;
  cout<<"Enter the measurement values of 3 sides of triangle";
  cin>>a,b,c;
  s=a+b+c/2.0;
  double area;
  area=sqrt(s*((s-a)*(s-b)*(s-c)));
  
  cout<< "Area of traingle based on measurements is "<<area;
}


