// Reversing alternate numbers in ana array

#include<iostream>
using namespace std;

void reverseAlternate(int arr[], int size){
	for(int i=0; i<size; i+=2){
		if (i+1<size){
			swap(arr[i],arr[i+1] );
		}
	}
}

void printDisplay(int arr[], int size){
	for(int i=0; i<size; i++){
		cout<< arr[i]<<" ";
	
	}
	cout<<endl;
}

int main()
{
int even[8]={1, 2, 3, 4, 5, 6, 7, 8};	
int odd[5]={4,6, 56, 76,5};

reverseAlternate(even, 8);
printDisplay(even, 8);

cout<<endl;

reverseAlternate(odd, 5);
printDisplay(odd, 5);
}
