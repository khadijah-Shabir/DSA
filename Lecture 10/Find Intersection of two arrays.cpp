#include <iostream>
#include <vector>
using namespace std;

vector<int> FindArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m) {
    vector<int> ans;

    int i = 0;
    int j = 0;
    while (i < n && j < m) {
        if (arr1[i] == arr2[j]) {
            ans.push_back(arr1[i]);  // Changed from pushback to push_back
            i++;
            j++;
        } else if (arr1[i] < arr2[j]) {  // Corrected the conditions
            i++;
        } else {
            j++;
        }
    }
    return ans;
}

int main() {
    int arr1_arr[] = {1, 2, 2, 3, 4, 5}; // Corrected array initialization
    vector<int> arr1(arr1_arr, arr1_arr + sizeof(arr1_arr) / sizeof(arr1_arr[0]));

    int arr2_arr[] = {2, 2, 4, 8, 9}; // Corrected array initialization
    vector<int> arr2(arr2_arr, arr2_arr + sizeof(arr2_arr) / sizeof(arr2_arr[0]));

    vector<int> result = FindArrayIntersection(arr1, arr1.size(), arr2, arr2.size()); // Corrected array size usage
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}

