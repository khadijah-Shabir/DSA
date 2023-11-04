#include <iostream>
using namespace std;
int main()
{
int oprice;
int discount;
int dprice;

cout<<"Enter original price of shirt";
cin>>oprice;
cout<<"enter discount on shirt in percentage";
cin>>discount;
discount=oprice*discount/100;

dprice=oprice-discount;

cout<<"Original price of shirt is "<<oprice<<endl;
cout<<"Discount on shirt is "<< discount<<endl;
cout<<"discounted price of shirt is  "<<dprice;
  
}
