#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int low = 0;
    int high = arr.size() - 1;

    while (low < high) {//why low<=high "DRY RUN"
        int mid = (low + high) / 2;

        if (arr[mid] < arr[mid + 1]) {
            // If the middle element is less than the next element, the peak is in the right half
            low = mid + 1;
        } else {
            // If the middle element is greater than or equal to the next element, the peak is in the left half
            high = mid;
        }
    }

    // When low reaches high, we have found the peak element
    return low;
}

int main() {
    vector<int> arr = {1, 2, 3, 2, 1};
    int peakIndex = peakIndexInMountainArray(arr);
    cout << "Peak of the mountain is: " << arr[peakIndex] << endl;
    return 0;
}