#include<iostream>
using namespace std;
//swapping alternate no

int swapalternate(int arr[], int size){
	
	for(int i=0; i<size; i+=2){
		if((i+1)<size){
			swap(arr[i],arr[i+1]);
		}
	}

}
void Display(int arr[], int size){
	for(int i=0; i<size; i++){
		cout<<arr[i];
	}
}
int main(){
	int even[8]={2,3,4,5,6,7,8,9};
	int odd[5]={5,6,7,8,9};
	
	swapalternate(even,8);
	Display(even,8);
	
}
