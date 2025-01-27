#include <iostream>
#include <vector>

using namespace std;

void RightRotate(vector<int>& arr, int k) {
    int n = arr.size();
    k = k % n; // Handle cases where k is greater than the array length
    // Create a temporary vector to store the rotated elements
    vector<int> temp(n);
    // Copy the last k elements to the beginning of the temporary vector
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }
    // Copy the remaining elements to the temporary vector
    for (int i = 0; i < n - k; i++) {
        temp[k + i] = arr[i];
    }
    // Copy the rotated elements back to the original array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}
int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    int k = 3; // Rotate by 3 positions to the right

    RightRotate(arr, k);

    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl; 

    return 0;
}