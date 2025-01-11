//find the intersection of 2 arr


#include <iostream>
#include <vector>

using namespace std;

vector<int> findIntersection(vector<int>& nums1, vector<int>& nums2) {
    vector<int> result;
    int i = 0, j = 0; 

    while (i < nums1.size() && j < nums2.size()) {
        if (nums1[i] < nums2[j]) {
            i++;
        } else if (nums1[i] > nums2[j]) {
            j++;
        } else { 
            result.push_back(nums1[i]); 
            i++; 
            j++;
        }
    }
    return result;
}

int main() {
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};
    vector<int> intersection = findIntersection(nums1, nums2);

    cout << "Intersection: ";
    for (int num : intersection) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}