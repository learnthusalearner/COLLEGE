//find the union of 2 array

#include <bits/stdc++.h>
using namespace std;

void findUnion(int arr1[], int n1, int arr2[], int n2) {
    set<int> st;

    // Insert elements of the first array into the set
    for (int i = 0; i < n1; i++) {
        st.insert(arr1[i]);
    }

    // Insert elements of the second array into the set
    for (int i = 0; i < n2; i++) {
        st.insert(arr2[i]);
    }

    // Print the union of the two arrays
    cout << "Union of the two arrays is: ";
    for (auto it: st) {
        cout << it << " ";
    }
    cout << endl;
}

int main() {
    int arr1[] = {1, 2, 4, 5, 6};
    int arr2[] = {2, 3, 5, 7};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    findUnion(arr1, n1, arr2, n2);

    return 0;
}
