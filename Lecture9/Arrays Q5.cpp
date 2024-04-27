//using functions with arrays

#include<iostream>
using namespace std;

// user defined function
   void printArray(int arr[], int size){
   	cout<<"Printing the Array"<<endl;
   	
   	//array printing
   	
   	for(int i=0; i<size; i++){
   		cout<<arr[i]<<" ";
	   }
	   cout<<"Arrays printing done"<<endl;
   }
int main()
{
 int third[15]={2,5,7};
 int n=15;
 printArray(third, 15);
 
 int fourth[10]={2,5,7,11,13};
 n=10;
 printArray(fourth,10);
 
 //Finding array sizes
 cout<<"size of fourth array is"<<endl;
 int arraysize= sizeof(fourth)/sizeof(int);
 cout<<arraysize;
}

