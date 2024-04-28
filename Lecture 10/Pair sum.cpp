#include<iostream>
#include<vector>
#include<algorithm> // Added for using sort function
using namespace std;

vector<vector<int> > pairsum(vector<int> &arr, int s) {
    vector<vector<int> > ans; // Corrected the syntax

    for(int i = 0; i < arr.size(); i++) {
        for(int j = i + 1; j < arr.size(); j++) {
            if(arr[i] + arr[j] == s) {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main() {
    int values[] = {1, 2, 3, 4, 5};
    vector<int> arr(values, values + sizeof(values) / sizeof(values[0]));
    int s = 5;
    vector<vector<int> > result = pairsum(arr, s);
    for(int i = 0; i < result.size(); i++) {
        for(int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

