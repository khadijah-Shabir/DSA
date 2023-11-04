#include<iostream>
using namespace std;
int main()
{ 
 int oprice;
 int discount;
 int dprice;
 
 cout<<"enter original price of shirt";
 cin>>oprice;
 cout<<"enter discount on shirt in percentage";
 cin>>discount;
 discount=oprice*discount/100;
 
 dprice=oprice-discount;
 
 cout<<"orignal price of shirt"<<oprice<<endl;
 cout<<"discount on shirt in percentage"<<discount<<endl;
 cout<<"discount price of shirt is"<<dprice;
}
