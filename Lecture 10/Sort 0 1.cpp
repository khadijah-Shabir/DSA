#include <iostream>
using namespace std;
//Function forsorting the array in increasing order
void sortOne(int arr[],int n){
    int left=0;
    int right = n-1;
    while (left<right)
    {
        while (arr[left]==0 && left<right)
        {
            left++;   
        }
        while (arr[right]==1 && left<right)
        {
            right--;
        }

       if (left < right)
       {
         swap(arr[left],arr[right]);
        left++;
        right--;
       }
      
        
    }
    
}
//Function to print the values of array in sorted order
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int array1[8] = {1,1,0,0,0,0,1,0};
    sortOne(array1,8);
    print(array1,8);
}
