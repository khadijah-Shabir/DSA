
#include<iostream>
using namespace std;

int summation(int arr[], int size){
	int sum=0;
	for(int i=0; i<size; i++){
		sum=sum+arr[i];
	}
	return sum;
}
int main(){
	int arr[5]={1, 2, 3, 4, 5};
	cout<<"Printing the sum of array elements"<<endl;
    int ans= summation(arr, 5);
	 	cout<<ans;
	
}
