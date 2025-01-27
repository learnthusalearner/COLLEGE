#include <bits/stdc++.h>
using namespace std;

vector<int> findDuplicates(vector<int> arr) {
    set<int> seen;
    set<int> duplicates;

    for (int i = 0; i < arr.size(); i++) {
        if (seen.find(arr[i]) == seen.end()) {
            seen.insert(arr[i]);//Insert the element into the set. This is done to keep track of the elements that have been seen so far.
        } else {
            duplicates.insert(arr[i]);//If the element is already present in the set, it is a duplicate. So, insert it into the duplicates set.
        }
    }

    return vector<int>(duplicates.begin(), duplicates.end());
}

int main() {
    vector<int> arr = {12, 11, 40, 12, 5, 6, 5, 12, 11};
    vector<int> duplicates = findDuplicates(arr);
    cout << "Duplicates: ";
    for (int i = 0; i < duplicates.size(); i++) {
        cout << duplicates[i] << " ";
    }
    cout << endl;
    return 0;
}