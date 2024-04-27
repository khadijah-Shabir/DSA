#include<iostream>
using namespace std;

void update(int arr[], int n){
	cout<< "Inside the function"<<endl;
	arr[1]=120; //updating array's first elements
	
	//printing the array
	for(int i=0; i<3; i++){
		cout<< arr[i]<<" ";
	}
	cout<<endl;
	cout<<"Going back to the main function"<<endl;
}
int main()
{
int arr[3]={1, 2, 3};
update(arr, 3);

//printing the array
cout<<"Printing the main fuinction"<<endl;
for(int i=0; i<3; i++){
	cout<< arr[i]<<" ";
}
cout<<endl;
return 0;
}
