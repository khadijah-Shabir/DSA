//Find unique elements in the array

#include<iostream>
using namespace std;
int UniqueElement(int arr[], int size){ //Funcion to find unique elements in the array
	int ans=0;
	for(int i=0; i<size; i++){
		ans= ans^arr[i];
	}
	return ans;
}


int main(){
	int arr[5]={2,3,3,2,1};
	cout<<"Printing the unique element from Array "<<endl;
    int uni = UniqueElement(arr,5); //Passing out arguments to function
	 	cout<<uni;	

}
