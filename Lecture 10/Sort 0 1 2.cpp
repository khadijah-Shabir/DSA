#include <iostream>
using namespace std;

// Function for sorting the array containing 0s, 1s, and 2s
void sortArray(int arr[], int n) {
    int left = 0;
    int right = n - 1;
    int mid = 0;

    while (mid <= right) {
        switch(arr[mid]) {
            case 0:
                swap(arr[left], arr[mid]);
                left++;
                mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[mid], arr[right]);
                right--;
                break;
        }
    }
}

// Function to print the values of array in sorted order
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int array1[9] = {0, 2, 2, 1, 0, 1, 1, 0, 2};
    int n = sizeof(array1) / sizeof(array1[0]);

    sortArray(array1, n);
    printArray(array1, n);

    return 0;
}

