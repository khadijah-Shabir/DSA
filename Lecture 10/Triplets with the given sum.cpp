//Triplets with given sum

#include<iostream>
#include<vector>
#include<algorithm> // Added for using sort function
using namespace std;

vector<vector<int> > pairsum(vector<int> &arr, int s) {
    vector<vector<int> > ans; // Corrected the syntax

    for(int i = 0; i < arr.size(); i++) {
        for(int j = i + 1; j < arr.size(); j++) {
        	for(int k=j+1; k<arr.size(); k++){
            if(arr[i] + arr[j] + arr[k]== s) {
               vector<int> triplet;
                    triplet.push_back(arr[i]);
                    triplet.push_back(arr[j]);
                    triplet.push_back(arr[k]);
                    ans.push_back(triplet);
            }
        }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main() {
    int values[] = {1, 2, 3, 4, 5};
    vector<int> arr(values, values + sizeof(values) / sizeof(values[0])); //The first iterator values points to the beginning of the values array.
    int s = 12;                             //The second iterator values + sizeof(values) / sizeof(values[0]) points to the end of the values array.
    
  vector<vector<int> > result = pairsum(arr, s);
    for(int i = 0; i < result.size(); i++) {
        for(int j = 0; j < result[i].size(); j++) { // Corrected loop variable
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

