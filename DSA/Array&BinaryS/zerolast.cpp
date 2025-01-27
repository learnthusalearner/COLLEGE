// Move all the zeros to the end of the array

#include <bits/stdc++.h>
using namespace std;

void zero_at_last(vector<int>& arr) {
    int n = arr.size();
    int j = 0; 

    // Traverse the array
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main() {
    vector<int> arr = {0, 1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
    zero_at_last(arr);

    cout << "Array after moving zeros to the end: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}